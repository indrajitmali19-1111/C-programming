#include<stdio.h>
int main(){
	char name[100];
	printf("Enter Your Name:");
	gets(name);
	
	int i=0,count=0; //indrajeet
	while(name[i]!='\0'){
		if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'||name[i]=='u'||name[i]=='U'){
			count--; //count the vowel
			
		}
		i++;//increase vowel value=4
		
	}
	printf("%d",count);
}
