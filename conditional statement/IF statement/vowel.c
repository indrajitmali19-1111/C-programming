#include <stdio.h>
int main()
{ 
char ch;
printf("Enter character word:");
scanf("%c",&ch);

if(ch=='a'  || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
	printf("%c this is vowel",ch);
}
}
