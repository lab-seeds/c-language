#include<stdio.h>

int main(void)
{
	int i;
	FILE *out = fopen("output.txt","w");
	
	for(i = 1; i <= 100; i++)
	{
		fprintf(out, "%d\n", i);
	}
	
	return 0;
}
