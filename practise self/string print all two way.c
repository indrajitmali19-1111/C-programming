#include<stdio.h>
int main()
{
	char str[10]="Fortune";
	//all string print directly.
	printf("%s\n",str);
	
	//all string print by loop one by one.
	int i=0;
	for(i=0;i<7;i++){
		printf("%c",str[i]);
	}
}
