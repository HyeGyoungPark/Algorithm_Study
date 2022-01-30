#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int A[100001];

void binary(int n, int num){
	int first = 0, last = n - 1, mid;
	
	while(first <= last){
		mid = (first + last) / 2;
		if(A[mid] == num)
		{
			printf("1\n");
			return ;
		}
		else
		{
			if(A[mid] > num)
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}
	}
	printf("0\n");
	return ;
}

int compare(const void *a, const void *b){
	return *(int*)a > *(int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0);
}

int main(void){
	int N, M, temp;
	
	scanf("%d", &N);
	
	for(int i=0;i<N;i++){
		scanf("%d ", &A[i]);
	}
	
	qsort(A, N, sizeof(int), compare);
	
	int m;
	
	scanf("%d", &M);
	
	for(int i=0;i<M;i++){
		scanf("%d", &m);
		binary(N, m);
	}
	
	return 0;
}

  // 2중 for문으로 bubble 정렬하기 
	/*for(int i=0;i<N;i++){
		for(int j=0;j<N-i-1;j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}*/
