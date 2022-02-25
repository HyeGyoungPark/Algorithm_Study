#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int i=666;
    int count=0;
    while(1) {
        for(int j=0; j<7; j++) {
            if(i/(int)pow(10, j) % 1000 == 666) {
                count++;
                break;
            }
        }
        if(count == N) break;
        i++;
    }
    printf("%d\n", i);
    return 0;
}
