#include<stdio.h>

int main(void)
{
	int a[5] = {2, 5, 8, 10, 12}, b[5] = {4, 5, 7, 11, 13}, c[10] = {0};
	int t1 = 0, t2 = 0, i, j;
	
	for(i = 0; i < 10; i++)
	{
		if(t1 < 5 && t2 < 5)
		{
			if(a[t1] < b[t2])
			{
				c[i] = a[t1];
				t1 += 1;
			}
			else
			{
				c[i] = b[t2];
				t2 += 1;
			}
		}
		else
		{
			if(t1 >= 5)
			{
				c[i] = b[t2];
				t2 += 1;
			}
			else
			{
				c[i] = a[t1];
				t1 += 1;
			}
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	
	return 0;
}