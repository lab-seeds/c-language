#include<stdio.h>

int main(void)
{
	int a[5][5] = {0};
	int i, j, num = 1;
	int size = 5;
	
	for(int i = 0; i < size - 2; i++)
	{
		for(j = (size - i) - 3; j < 3 + i; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	
	for(i = 3; i < 5; i++)
	{
		for(j = i - 2; j < (size - i) + 2; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
			
		printf("\n");
	}
	
	return 0;
}
