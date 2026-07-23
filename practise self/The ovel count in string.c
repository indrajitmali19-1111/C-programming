#include<stdio.h>
int main(){
	char str[100];

	printf("Enter String:");
	scanf("%s",&str);
	
	int i=0;
	int count=0;
	
	while(str[i]!=NULL){
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
		str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			
			count++;
		}
		i++;
	}
	printf("\nThe Ovel count is:%d",count);
}
