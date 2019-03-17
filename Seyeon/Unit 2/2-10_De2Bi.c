#include<stdio.h>

int main(void)
{
	int num = 45;
	int a[100] = {0};
	int i = 0;
	int j = i;
	do
	{
		a[j] = num % 2;
		num /= 2;
		j++;
	}	while(num != 0);
	
	for(i = j - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
