#include<bits/stdc++.h>

int main(void)
{
	int a[9][9] = {0};
	int i, j, temp = 0,column, row;
	
	srand((unsigned)time(NULL));
	
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
			a[i][j] = rand()%101;
	}
  
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(a[i][j] > temp)
			{
				temp = a[i][j];
				row = i + 1;
				column = j + 1;
			}
		}
	}
	
	printf("%d %d\n", row, column);
	
	return 0;
}
