#include<stdio.h>

int main(){
	FILE *out;
	
	out = fopen("textfile_01.txt","w");
	
	int i;
	for(i = 1;i<=100;i++){
		fprintf(out,"%d\n",i);
	}
	
	return 0;
}
