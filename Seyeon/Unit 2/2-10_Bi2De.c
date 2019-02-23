#include<stdio.h>
#include<math.h>

int main(void)
{
	int a[6] = {1, 0, 1, 0, 1, 0};
	int num = 0;
  
	for(int i = 0; i < 6; i++)
	{
		num += pow(a[i] * 2, i);
	}
	printf("%d", num);
	
	return 0;
}
