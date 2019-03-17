#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[8] = {1, 1, 0, 1, 1, 0, 1, 0};
	int num = 0;
	int temp;
	int size = sizeof(a) / sizeof(int);
	
	for(int i = size - 1; i >= 0; i--)
	{
		num += pow(2, size - i - 1) * a[i];
	}
	printf("%d", num);
	
	return 0;
}
