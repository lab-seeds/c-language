#include<stdio.h>

int main(void)
{
	int a[10] = {4, 8, 2, 0, 1, 9, 5, 7, 3, 6};
	
	int i, j, temp;
	
	for(i = 1; i < 10; i++)
	{
		temp = a[i];
		for(j = i; j > 0; j--)
		{
			if(a[j - 1] > temp)
			{
				a[j] = a[j - 1];
			}
			else
			{
				break;
			}
		}
		a[j] = temp;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}