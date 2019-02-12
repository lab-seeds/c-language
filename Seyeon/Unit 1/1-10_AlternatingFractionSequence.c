#include<stdio.h>
#include<stdbool.h>	//bool 자료형을 사용할 수 있게 해줍니다.

int main(void)
{
	double  K = 0, L = 0, S = 0, NN = 0;
	bool SW = true;

	do
	{
		K += 1;
		L = K / ((K + 1) * (K + 2));
		if (SW)
			S += L;
		else
			S -= L;

		SW = !SW;

	} while (K == 49);

	printf("%f\n", S);

	return 0;
}