#include <stdio.h>

//자릿수 구하는 함수
int place(int n) {
    int cnt=0;
    while(n!=0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int my_pow(int a, int b) {
    int c=1;
    for(int i=0; i<b; i++) {
        c = c*a;
    }
    return c;
}
int main(void) {
    //char N[10];
    //unsigned int N_result;
    int count = 0;
    double X;
    //char tmp;
    scanf("%lf", &X);
    for(int i=11; i<100000000; i++) {
        /* 반복문 + 문자열(시간초과)
        if(((X*i)-(int)(X*i))==0) {
            sprintf(N, "%d", i);
            tmp = N[0];
            for(int j=0; j<strlen(N)-1; j++) {
                N[j] = N[j+1];
            }
            N[strlen(N)-1] = tmp;
            N_result = atoi(N);
            if((i*X) == N_result) {
                printf("%d\n", i);
                count++;
            }
        }*/
        //수식으로 구현
        // ((X*i)-(int)(X*i))==0 이 부분은 시간초과 때문에 i중에서 X랑 곱해서 정수가 되는 i들만 먼저 추리면 시간이 단축되지 않을까 싶어서 추가했습니다.
        if(((X*i)-(int)(X*i))==0 && (i/my_pow(10, place(i)-1)) * (my_pow(10, place(i)) -1) / (10-X) == i) {
            printf("%d\n", i);
            count++;
        }
    }
    if(count == 0) printf("No solution\n");

    return 0;
}
