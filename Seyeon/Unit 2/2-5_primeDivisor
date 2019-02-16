#include<stdio.h>
#include<math.h>

int main(void)
{
	int num = 104;
	int temp = num;
	int i, j, index = 0;
	int a[20] = { 0 };
	
	if(num < 2)
	{
		printf("1");
	}
	else
	{
		for(i = 2; i < num; i++)
		{
			while((temp % i) == 0)
			{
				temp = temp / i;
				a[index] = i;
				index += 1;
			}
			if(temp == 1)
				break;
		}
	}
	
	printf("%d = ", num);
	
	if(a[0] == 0)
	{
		printf("이 숫자는 소수입니다");
	}
	else
	{
		for(i = 0; i < (sizeof(a) / 4); i++)
		{
			if(a[i + 1] == 0)
			{
				printf("%d\n", a[i]);
				break;
			}
			printf("%d X ", a[i]);
		}
	}	
	
	return 0;
}
