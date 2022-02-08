#include <stdio.h>

int main(void){
	int N;
	
	scanf("%d", &N);
	
	int array[N];
	
	for(int i=0;i<N;i++){
		scanf("%d", &array[i]);
	}
	
	int value[1000001] = {0};
	int renew_array[N];
	int var;
	
	for(int i=0;i<N;i++){
		renew_array[i] = 1000000001;
	}
	
	renew_array[0] = array[0];
	
	for(int i=0;i<N;i++){
		int num = 0;
		
		for(int j=0;j<i;j++){
			if(array[i] == renew_array[j]){
				num++;
			}
		}
		
		if(num == 0){
			renew_array[i] = array[i];
		}
	}
	
	for(int i=0;i<N;i++){
		var = array[i];
		
		for(int j=0;j<N;j++){
			if(var > renew_array[j]){
				value[i] += 1;
			}
		}
	}
	
	for(int i=0;i<N;i++){
		printf("%d ", value[i]);
	}
	
	return 0;
}
