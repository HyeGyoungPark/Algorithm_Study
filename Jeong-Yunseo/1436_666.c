#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, num = 665;
	int count = 0;
	
	scanf("%d", &N);
	
	while(1)
	{
		if(N == count)
		{
			break;
		}
		
		num++;
		
		while(num != 0)
		{
			if(num % 1000 == 666)
			{
				count++;
				break;
			}
			else
			{
				num = num / 10;
			}
		}
	}
	
	printf("%d\n", num);
	
	return 0;
}
