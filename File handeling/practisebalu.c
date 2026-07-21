#include<stdio.h>
int main()
{
	FILE *kbp;
	kbp=fopen("balu.txt","w");
	
	fprintf(kbp,"Balus Record");
	fclose(kbp);
	printf("Record Done Succesfully");
	return 0;
}
