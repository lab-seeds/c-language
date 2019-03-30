#include <bits/stdc++.h>

int main(void)
{
	int i, sum = 0, num;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++)
	{
		if((num % i) == 0)
		{
			sum += i;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
