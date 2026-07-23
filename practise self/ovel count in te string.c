#include<stdio.h>
int main(){
	char str[10]="fortune";
	
	int i=0;
	int count=0;
	
	while(i<10){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||
		str[i]=='u'){
			count++;
		}
		i++;
	}
	printf("The Number Of ovel is:%d",count);
}
