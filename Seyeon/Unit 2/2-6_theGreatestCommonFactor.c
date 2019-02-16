#include<stdio.h>

int num1 = 192, num2 = 71;
int a = num1, b = num2, c = 0;
void TGCF()
{
	while(1)
	{
		c = a % b;
		if(c == 0)
			break;
		a = b;
		b = c;
	}
	printf("%d", b);	
}

int main(void)
{
	TGCF();
	
	return 0;
}
