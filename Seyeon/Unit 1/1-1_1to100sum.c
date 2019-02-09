#include<stdio.h>

int main(void)
{
	int n = 1, sum = 0;
	
	while(1) 
	{
		sum += n;
		
		n += 1;
		
		if(n > 100)
			break;
	}
	
	printf("%d\n", sum);
	
	return 0;
} 
