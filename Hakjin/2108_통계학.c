#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second) {
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(void) {
    int N;
    int avg, center, mode, range;
    int max=0, flag=0;
    double sum=0;
    scanf("%d", &N);
    int *ptr = malloc(N*sizeof(int));
    int *p_count = calloc(8001, sizeof(int));    //문제조건에서 입력되는 정수의 값이 -4000~4000사이의 정수이기 때문
    for(int i=0; i<N; i++) {
        scanf("%d", &ptr[i]);
    }
    if(N==1) {
        avg = *ptr;
        center = *ptr;
        mode = *ptr;
        range = 0;
    } else {
        qsort(ptr, N, sizeof(ptr[0]), compare);   //오름차순 정렬
        
        //avg
        for(int i=0; i<N; i++) {
            sum += ptr[i];
        }
        if(sum>=0) avg = (int)(sum/N+0.5);
        else avg = (int)(sum/N-0.5);
        
        //center
        center = ptr[N/2];
        
        //mode
        for(int i=0; i<N; i++) {
            p_count[ptr[i] + 4000]++;  //입력값 -4000이 인덱스 0에 대응
        }
        for(int i=0; i<8001; i++) {
            if(p_count[i] > max) max=p_count[i];
        }
        for(int i=0; i<8001; i++) {
            if(p_count[i] == max && max!=0) {
                if(flag==0) {
                    flag++;
                    mode = i -4000;
                } else if(flag==1) {
                    mode = i -4000;
                    break;
                }
            }
        }
        
        //range
        range = ptr[N-1] - ptr[0];
    }
    printf("%d\n", avg);
    printf("%d\n", center);
    printf("%d\n", mode);
    printf("%d\n", range);

    
    return 0;
}
