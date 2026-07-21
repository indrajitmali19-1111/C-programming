#include<stdio.h>
int main()
{ 
char str[100];

printf("Enter character :");
scanf("%s",&str);

printf("The character is:%s",str);
int len=strlen(str);
printf("\n%d",len);

printf("\n%s",strupr(str));


}
//Special Character is allowed in String



//#include<stdio.h>
//int main()
//{
//	char str[100];
//	printf("Enter Character:");
//	gets(str);
//	
//	printf("the character is:");
//	puts(str);
//}
