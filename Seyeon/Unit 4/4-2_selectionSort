#include<stdio.h>

int main(void)
{
	int a[10] = {4, 8, 2, 0, 1, 9, 5, 7, 3, 6};
	int i, j;
	int temp;
	
	for(i = 0; i < 9; i++)
	{
		for(j = i; j < 9; j++)
		{
			if(a[i] > a[j + 1])
			{
				temp = a[i];
				a[i] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}
