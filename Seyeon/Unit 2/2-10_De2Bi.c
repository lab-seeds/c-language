#include<stdio.h>

int main(void)
{
	int num = 72;
	int a[100] = {0};
	int i = 0;
	int j = i;
	while(1)
	{
		a[j] = num % 2;
		num /= 2;
		j++;
		if(num == 0)
		{
			break;
		}
	}
	printf("%d ", 1);
	for(i = j - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
