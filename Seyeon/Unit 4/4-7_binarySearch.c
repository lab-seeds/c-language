#include<stdio.h>
#define LEN 10
int main(void)
{
	char alpha[LEN] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int num[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, j, target = 7;
	int left = 0, right = LEN - 1, mid;
	
	for(i = 0; i < LEN / 2; i++)
	{
		mid = (left + right) / 2;
		if(num[mid] == target)
		{
			break;
		}
		else
		{
			if(target > num[mid])
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	
	printf("alphabet : %c \nnumber : %d\n", alpha[mid], num[mid]);
	
	return 0;
}

