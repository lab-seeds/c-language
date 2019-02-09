#include<stdio.h>

int main(void)
{
	int i = 0, num, s1 = 0, s2 = 0;
	
	FILE *fin;
	fin = fopen("1to100.txt","r");
	
	while(i < 100)
	{
		fscanf(fin, "%d\n", &num);
		s1 += num;
		if((num % 3) == 0)
		{
			
			s2 += (num * num);
		}
		i++;
	}
	
	printf("%d %d\n", s1, s2);
	
	fclose(fin);
	
	return 0;
}
