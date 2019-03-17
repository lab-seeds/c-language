#include<stdio.h>
#define LEN 5
int a[5] = {1, 0, 1, 0, 0};
int onesComplement()
{
	int i;
	for(i = 0; i < LEN; i++)
	{
		if(a[i] == 1)
			a[i] = 0;
		else
			a[i] = 1;
	}
	
}

int twosComplement()
{
	int i;
	a[LEN - 1] += 1;
	
	if(a[i] == 1)
			return 0;
			
	for(i = LEN - 1; i > -1; i--)
	{
		if(a[i] == 2)
		{
			a[i] -= 2;
			a[i - 1] += 1;
		}
	}
	
}
int main(void)
{
	
	onesComplement();
	twosComplement();
	
	for(int i = 0; i < 5; i++)
		printf("%d ", a[i]);
		
	return 0;
	
}
