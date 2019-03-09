#include<stdio.h>
#define LEN 10
int main(void)
{
	char alpha[LEN] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int num[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, j, target = 2, value = LEN / 2;
	
	for(i = 0; i < value; i++)
	{
		if(num[value] == target)
		{
			break;
		}
		else
		{
			if(num[value] > target)
			{
				value = value / 2;
			}
			else
			{
				value = value / 2 + value;
			}
		}
	}
	
	printf("alphabet : %c \nnumber : %d\n", alpha[value], num[value]);
	
	return 0;
}

