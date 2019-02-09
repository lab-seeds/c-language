#include<stdio.h>

//1 - 2 + 3 - 4 + ... - 100
// = (-1 * (수의 개수 | 최종 N의 값)) / 2
// = (-1 * 100) / 2 
// = -50
int main(void)
{

	int N = 0, S = 0;

	do
	{
		N += 1;
		S += N;

		N += 1;
		S -= N;

	} while (!(N == 100));

	printf("%d\n", S);

	return 0;
}