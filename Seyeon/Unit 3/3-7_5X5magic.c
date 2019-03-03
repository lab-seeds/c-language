#include<stdio.h>

int main(void)
{
	int a[5][5] = {0};
	int i = 0, num = 1, l = 5;
	int r = 0, c = l / 2;
	int tempr, tempc;
	
	for(i = 0; i < (l * l); i++)
	{
		a[r][c] = num;
		
		tempr = r - 1;
		tempc = c - 1;
		if(tempr < 0)
			tempr += l;
		if(tempc < 0)
			tempc += l;
		if(a[tempr][tempc] != 0)
		{
			tempr = r + 1;
			tempc = c;
		}
		
		r = tempr;
		c = tempc;
		
		num += 1;
	}
  
	for(i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
			
		printf("\n\n\n");
	}
}
