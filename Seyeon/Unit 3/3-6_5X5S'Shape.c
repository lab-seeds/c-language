#include<stdio.h>

int main(void)
{
	int a[5][5] = {0};
	int i, j, num = 1, m = -1, l = 5, t = 1;
	
	for(i = 0; i < l; i++)
	{
		for(j = 1; j <= l; j++)
		{
			a[i][m + (t * j)] = num;
			
			num += 1;
		}
		m += t * (l + 1);
		t *= -1;
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
			
		printf("\n\n\n");
	}
}
