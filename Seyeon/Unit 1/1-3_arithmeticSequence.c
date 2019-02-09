#include<stdio.h>

//2부터 2씩 더하는 등차수열의 200번째 까지의 합을 구합니다.
int main(void)
{
	int i = 1, sum = 0, d = 2;

	do
	{
		sum += i * d;

		i++;

	} while (!(i > 200));	//N이 200보다 크지 않다면
	
	printf("%d\n", sum);

	return 0;
}