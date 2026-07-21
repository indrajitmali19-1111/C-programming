#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter String=");
	gets(str);
	
	printf("String=");
	puts(str);
	
	int len=strlen(str);
	printf("%d\n",len);
	
	printf("%s",strupr(str));
}
