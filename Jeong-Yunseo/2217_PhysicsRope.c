#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(void){
	int N, temp;
	
	scanf("%d", &N);
	
	int rope[N], weight[N];
	
	for(int i=0;i<N;i++){
		scanf("%d", &rope[i]);
	}
	
	qsort(rope, N, sizeof(int), compare);
	
	for(int i=0;i<N;i++){
		weight[i] = rope[i] * (N-i);
	}
	
	int max = weight[0];
	
	for(int i=1;i<N;i++){
		if(max < weight[i]){
			max = weight[i];
		}
	}
	
	printf("%d", max);
	
	return 0;
}
