#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int a[25][2];
	int i, j;
	
	srand((unsigned)time(NULL));
	
	for(i = 0; i < 25; i++)
	{
		a[i][0] = rand()%101;
	}
	
	for(i = 0; i < 25; i++)
	{
		a[i][1] = 1;
	}
	for(i = 0; i < 25; i++)
	{
		for(j = 0; j < 25; j++)
		{
			if(a[i][0] < a[j][0])
			{
				a[i][1] += 1;
			}
		}
		printf("%d %d\n", a[i][0], a[i][1]);
	}
}
