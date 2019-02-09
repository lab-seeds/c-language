#include<stdio.h>

//3씩 10번 곱하는 등비수열
//2 + 2 * 3 + 2 * 3^2 + 2 * 3^3 + 2 * 3^4 + 2 * 3^5 + 2 * 3^6 + 2 * 3^7 + 2 * 3^8 + 2 * 3^9 + 2 * 3^10
int main(void)
{

	int R = 3, A = 2, N = 1;
	int S = 0;
	
	do
	{
		A *= R;
		S += A;
		N++;

	} while (!(N > 10));	//10번 반복

	printf("%d\n", S);

	return 0;
}