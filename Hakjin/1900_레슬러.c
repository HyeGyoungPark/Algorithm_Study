#include <stdio.h>
#include <stdlib.h>

typedef struct wrestler {
    int number;
    int victory;
    int force;
    int ring;
    int performance;
} WRESTLER;

int static compare (const void* first, const void* second) {
    WRESTLER *pt_first = (WRESTLER*)first;
    WRESTLER *pt_second  = (WRESTLER*)second;
    
    if (pt_first->victory < pt_second->victory)
        return 1;
    else if (pt_first->victory > pt_second->victory)
        return -1;
    else
        return 0;
}

int main(void) {
    int N;
    scanf("%d", &N);
    WRESTLER member[N];
    for(int i=0; i<N; i++) {
        scanf("%d %d", &member[i].force, &member[i].ring);
        member[i].victory = 0;
        member[i].number = i+1;
    }
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            member[i].performance = member[i].force + member[i].ring * member[j].force;
            member[j].performance = member[j].force + member[j].ring * member[i].force;
            if(member[i].performance > member[j].performance) member[i].victory++;
            else member[j].victory++;
        }
    }
    qsort(member, N, sizeof(WRESTLER), compare);
    for(int i=0; i<N; i++) {
        printf("%d\n", member[i].number);
    }
    return 0;
}
