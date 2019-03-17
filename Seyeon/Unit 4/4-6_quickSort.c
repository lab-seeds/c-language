#include<stdio.h>

int a[10] = {4, 8, 2, 0, 1, 9, 5, 7, 3, 6};

int qSort(int l, int r)
{
	int i, j, pivot, temp;
	if(l < r)
	{
		i = l;
		j = r + 1;
		pivot = a[l];
		
		do
		{
			do
			{
				i++;
			}	while(a[i] < pivot);
			do
			{
				j--;
			}	while(a[j] > pivot);
			if(i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}	while(i < j);
		
		temp = a[l];
		a[l] = a[j];
		a[j] = temp;
		qSort(l, j-1);
		qSort(j + 1, r);
	} 
}


int main(void)
{
	int i;
	qSort(0, 9);
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}

