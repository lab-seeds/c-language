#include<stdio.h>

//(1 + 100) ^ 2 + (2 + 99) ^ 2 + (3 + 98) ^ 2 + ... + (100 + 1) ^ 2
int main(void)
{

	int A = 0, B = 0, C = 0, S = 0;
	do
	{
		A += 1;
		B = 101 - A;
		C = A + B;
		C = C * C;
		S += C;

	} while (A < 100);	//100번 반복

	printf("%d\n", S);

	return 0;
}