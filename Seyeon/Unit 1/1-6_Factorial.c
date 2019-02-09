#include<stdio.h>

// 1! + 2! + 3! + 4! + 5! + 6! + 7! + 8! + 9! + 10!
int main(void)
{
	
	int S = 0, N = 0, F = 1;

	do
	{
		N += 1;
		F *= N;
		S += F;
	} while (!(N == 10));	//10번 반복

	printf("%d\n", S);

	return 0;
}