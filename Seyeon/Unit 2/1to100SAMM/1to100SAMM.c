#include<stdio.h>

FILE *in = fopen("1to100.txt","r");
int array[101];
int i, n = 100;

//합계 
int sum()
{
	int sum = 0;
	
	for(i = 0; i < 100; i++)
	{
		sum += array[i];
	}
	
	return sum;
}

//평균 
int average()
{
	int average = 0;
	return (sum() / n);
}

//최댓값 
int max()
{
	int max = 0;
	for(i = 0; i < 100; i++)
	{
		if(array[i] > max)
			max = array[i];
	}
	
	return max;	
}

//최솟값 
int min()
{
	int min = array[0];
	for(i = 1; i < 100; i++)
	{
		if(array[i] < min)
			min = array[i];
	}
	
	return min;	
}
int main(void)
{
	while( !feof( in ) )
		{
			fscanf( in, "%d\n", &array[i]);
			i++;
		}
	
	printf("sum = %d\n", sum());
	printf("average = %d\n", average());
	printf("max = %d\n", max());
	printf("min = %d\n", min());
	
	return 0;
}
