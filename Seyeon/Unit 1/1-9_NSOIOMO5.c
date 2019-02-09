#include<stdio.h>
#include<stdbool.h>	//bool 자료형을 사용할 수 있게 해줍니다.

//Natural sequence of interchange of multiple of 5
// 5 - 10 + 15 - 20 + ... - 100
// = (-5 * (수의 개수 | 최종 N의 값)) / 2
// = (-5 * 20) / 2
// = -50
int main(void)
{

	int N = 0, S = 0, NN = 0;
	bool SW = true;

	do
	{
		N += 1;
		NN = N * 5;

		if (SW)
			S += NN;
		else
			S -= NN;

		SW = !SW;

	} while (!(NN == 100));	//N * 5 = 100이면 종료

	printf("%d\n", S);

	return 0;
}