#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter A string:");
	gets(str);
	char str2[20];
	
	int  i=0,count=0;
	
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			if(str2=='a'||str=='e'||str=='i'){
				puts(str2);
			}
		
		count++;
		}
		i++;
	}
	printf("Count Of Vowel Is:%d",count);
}	
