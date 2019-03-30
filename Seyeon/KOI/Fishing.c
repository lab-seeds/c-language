#include<bits/stdc++.h>

int main(void)
{
	int *pond;
	int i, j, pondSize, net, sum, temp = 0;
	
	scanf("%d", &pondSize);
	
	pond = (int*) malloc (sizeof(int) * pondSize);
	
	scanf("%d", &net);
	for(i = 0; i < pondSize; i++)
		scanf("%d", &pond[i]);
		
	for(i = 0; i < (pondSize - net) + 1; i++)
	{
		sum = 0;
		for(j = 0; j < net; j++)
			sum += pond[i + j];
			
		if(sum > temp)
			temp = sum;
	}
	
	printf("%d\n", temp);
	
	return 0;
}
