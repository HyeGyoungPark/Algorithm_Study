#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int T;
	int x1, y1, r1, x2, y2, r2;
	double d;
	int count;
	
	scanf("%d", &T);
	
	int array[T];
	
	for(int i=0;i<T;i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		
		d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		
		if(r1+r2 < d){
			count = 0;
		}
		else if(abs(r1 - r2) > d){
			count = 0;
		}
		else if(abs(r1 - r2) == d){
			count = 1;
		}
		else if(r1+r2 == d){
			count = 1;
		}
		else if(d==0 && r1==r2){
			count = -1;
		}
		else if((r1+r2>d)&&(abs(r1-r2)<d)){
			count = 2;
		}
		
		array[i] = count;
	}
	
	for(int i=0;i<T;i++){
		printf("%d\n", array[i]);
	}
	
	return 0;
}
