//#include<stdio.h>
//int main()
//{
//	char name[100];
//	printf("Enter Your Name:");
//	gets(name);
//	
//	int i=0,count=0;
//	
//	
//	while(name[i]!='\0'){
//		if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||
//		name[i]=='O'||name[i]=='u'||name[i]=='U'){
//			count++;
//		}
//		i++;
//     }
//
//	printf("the count of vowel:%d",count);
//}




#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter Your Number:");
	gets(str);
	
	int i=0,pml=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
			pml++;
		}
		i++;
		
	}
	printf("The vowel counts:%d",pml);
	
}
