#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void)
{
	int num = 523;
	bool isPrime = false;
	//int snum = sqrt(num);
	
	for(int i = 2; i < num; i++)
	{
		if((num % i) == 0)
		{
			isPrime = true;
			break;
		}
	}
	if(isPrime)
		printf("%d is not prime", num);
	else
		printf("%d is prime", num);
		
	return 0;
}
