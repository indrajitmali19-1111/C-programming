#include<stdio.h>
int main()
{
	char str[10]="FORTUNE";
	
	printf("Before Update String ele:%s",str);
	
	str[0]='p';
	str[3]='i';
	str[7]='s';
	
	
	printf("\nAfter Update string:%s",str);
}
