#include <stdio.h>

int main(void){
	int N, M = 0;
	float sum = 0, avg;
	
	scanf("%d", &N);
	
	int array[N];
	
	for(int i=0;i<N;i++){
		scanf("%d", &array[i]);
		if(M<array[i]){
			M = array[i];
		}
	}
	
	for(int i=0;i<N;i++){
		sum += (float)array[i]/M*100;
	}
	
	avg = sum/N;
	
	printf("%f\n", avg);	
	
	return 0;
}
