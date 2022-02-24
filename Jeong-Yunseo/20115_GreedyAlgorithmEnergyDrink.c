#include<stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    int array[N];

    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }

    int max = array[0];

    for(int i=1;i<N;i++){
        if(max<array[i]){
            max = array[i];
        }
    }

    float sum = 0;

    for(int i=0;i<N;i++){
        if(array[i] != max){
        sum += array[i];
        }
    }

    sum /= 2;
    sum += max;

    printf("%f", sum);
    
    return 0;
}
