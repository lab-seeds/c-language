#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void)
{
	int num = 523;
	bool isNotPrime = false;
	int snum = sqrt(num);
	
	for(int i = 2; i <= snum; i++)
	{
		if((num % i) == 0 || num < 2)
		{
			isNotPrime = true;
			break;
		}
	}
	if(isNotPrime)
		printf("%d is not prime", num);
	else
		printf("%d is prime", num);
		
	return 0;
}
