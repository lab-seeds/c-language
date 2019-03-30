#include<bits/stdc++.h>

int main(void)
{
	int a, b, c, count = 0;
	int num;
	scanf("%d", &num);
	
	for(a = 1; a < num; a++)
	{
		for(b = 1; b <num - a; b++)
		{
			c = num - a - b;
			
			if((a <= b && b <= c) && (a + b) > c)
			{
				printf("%d %d %d\n", a, b, c);
				count++;
			}
		}
	}
	
	printf("%dEA\n",count);
	
	return 0;
}
