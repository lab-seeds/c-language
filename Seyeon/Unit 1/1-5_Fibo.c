#include<stdio.h>

int fibo(int n)
{
	if(n <= 0)
		return 0;
	else if(n == 1)
		return 1;
	
	return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
	int n = 5, sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += fibo(i);
	}
	printf("1번째부터 %d번째까지의 합 : %d \n", n, sum);
	return 0;
}
