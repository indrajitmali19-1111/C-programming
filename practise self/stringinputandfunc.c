#include<stdio.h>
#include<string.h>
int main(){
	char str1[10];
	char str2[20];
	char str3[30];
	
	printf("Enter String One:");
	gets(str1);
	printf("\nEnter String Two:");
	gets(str2);
	puts(str1);
	puts(str2);
	
	//strlength check
	int i=strlen(str1);
	printf("%d",i);
	
	strcpy(str1,str3); 
	printf("\n%s",str3);
	
	
}
