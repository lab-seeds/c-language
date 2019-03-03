#include<stdio.h>

int main(void)
{
	int a[5][5] = {0}, b[5][5] = {0};
	int i, j, n = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			a[i][j] = (i * 5) + j + 1;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			n = 4 - i;
			b[j][n] = a[i][j];
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			printf("%d\t", b[i][j]);
			
		printf("\n\n\n");
	}
}
