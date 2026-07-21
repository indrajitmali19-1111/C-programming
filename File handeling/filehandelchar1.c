#include<stdio.h>
int main(){
	FILE *mi;
	int mr;
	mi=fopen("indra2.txt","w");
	fprintf(mi,"11");
	fclose(mi);
	
	mi=fopen("indra2.txt","r");
	fscanf(mi,"%d",&mr);
	printf("%d",mr);
	fclose(mi);
}
