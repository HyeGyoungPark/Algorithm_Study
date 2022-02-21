#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int n, m;
    long long max=0, sum=0;
    scanf("%d %d", &n, &m);
    long long * sum_arr = (long long *)calloc(n-m+1, sizeof(long long));
    int* pay_arr = (int*)malloc(sizeof(int)*(n+1));
    for(int i=0; i<n; i++) scanf("%d", &pay_arr[i]);
    for(int i=0; i<m; i++) sum += pay_arr[i];
    for(int i=0; i<n-m+1; i++) {
        sum_arr[i] = sum;
        sum = sum - pay_arr[i] + pay_arr[i+m];
    }
    //sum_arr에서 max찾기
    for(int i=0; i<n-m+1; i++) {
        if(sum_arr[i] > max) max = sum_arr[i];
    }
    printf("%lld\n", max);
    return 0;
}
