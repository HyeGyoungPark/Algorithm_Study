#include <stdio.h>

int result = 1;

void factorial(int n) {
	for (int i = 1; i < n + 1; i++) {
		result *= i;
	}

	return ;
}

int main(void){
	int N, last, remain;

	scanf("%d", &N);
	
	factorial(N);

	last = result % 10;
	remain = result / 10;
	
	while(last == 0){
		last = remain % 10;
		remain = remain / 10;
	}
	
	printf("%d", last);

	return 0;
}
