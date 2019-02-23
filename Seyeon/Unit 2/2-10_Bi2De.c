#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[6] = {1, 0, 1, 0, 1, 0};
	int num = 0;
	int temp;
	int size = sizeof(a) / sizeof(int);
	
  	for (int i = 0; i < size / 2; i++) 
	{
    	temp = a[i];
    	a[i] = a[(size - 1) - i];
    	a[(size - 1) - i] = temp;
    	}
	
	for(int i = 0; i < size; i++)
	{
		num += pow(2, i) * a[i];
	}
	printf("%d", num);
	
	return 0;
}
