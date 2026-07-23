#include<stdio.h>
int main(){
	
	char str1[20]="HELLO";
	char str2[]="WORLD";
	
	printf("Length:%zu\n",strlen(str1));
	
	
	printf("%s\n\n",str1);
	
	strcat(str1,str2);
	
	printf("STRING 1:%s \n STRING2: %s\n",str1,str2);
	
	if(strcmp(str1,str2)==0){
		printf("Equal");
	}
}
