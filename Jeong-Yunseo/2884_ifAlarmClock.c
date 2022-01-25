#include <stdio.h>

int main(void)
{
	int H, M;
	int num;
	int hour, minute;
	
	scanf("%d %d", &H, &M);
	
	if(0>H || H>23 || 0>M || M>59){
		return 1;
	}
	else {
		if(M<45){
			if(H>0){
				num = M - 45;
				minute = 60 + num;
				hour = H - 1;
			}
			else{
				num = M - 45;
				minute = 60 + num;
				hour = 23;
			}
		}
		else{
			hour = H;
			minute = M - 45;
		}
	}
	
	printf("%d %d\n", hour, minute);
	
	return 0;
}
