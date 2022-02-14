#include <stdio.h>

int main(void){
	int c;
	
	scanf("%d", &c);
	
	for(int i=0;i<c;i++){
		int N;
		scanf("%d", &N);
		
		int sum = 0;
		int array[1001];
		for(int j=0;j<N;j++){
			scanf("%d", &array[j]);
			sum += array[j];
		}
		
		float average = (double)sum / N;
		
		int count = 0;
		for(int i=0;i<N;i++){
			if(array[i] > average){
				count++;
			}
		}
		
		double percent;
		percent = (double)count/N*100;
		
		printf("%.3f%%\n", percent);
	}
	
	return 0;
}
