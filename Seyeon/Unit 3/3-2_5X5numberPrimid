#include<stdio.h>

int main(void)
{
	int a[5][5] = {0};
	int i, j, num = 1;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < i + 1; j++)
		{
			a[i][j] = num;
			num += 1;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(a[i][j] != 0)
				printf("%d\t", a[i][j]);
		}
		printf("\n\n\n");
	}
}
