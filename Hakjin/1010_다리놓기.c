#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T;
    scanf("%d",&T);
    int* N_site = (int*)malloc(T*sizeof(int));
    int* M_site = (int*)malloc(T*sizeof(int));
    for(int i=0; i<T; i++) {
        scanf("%d %d", &N_site[i], &M_site[i]);
    }
    
    int arr[30][30];
    for(int n=1; n<=29; n++) {
        arr[n][1] = n;
        for(int r=2; r<=n; r++) {
            if(n==r) {
                arr[n][r] = 1;
                break;
            }
            arr[n][r] = arr[n-1][r] + arr[n-1][r-1];
        }
    }
    for(int i=0; i<T; i++) {
        printf("%d\n", arr[M_site[i]][N_site[i]]);
    }
    free(N_site);
    free(M_site);
    return 0;
}
