#include<stdio.h>

int main(void)
{
	int a[5][5] = {0};
	int i, j, num = 1;
	
	for(int i = 0; i < 3; i++)
	{
		for(j = i; j < 5 - i; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	
	for(i = 3; i < 5; i++)
	{
		for(j = (5 - i) - 1; j < i + 1; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
			
		printf("\n\n\n");
	}
	
	return 0;
}
