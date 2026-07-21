#include<stdio.h>
int main()
{
	char str[7]="FORTUNE";
	int i,ind;
	printf("Enter Index:");
	scanf("%d",&ind);
	if(ind<8){
		
	
	for(i=0;i<7;i++){
		if(ind==i){
		printf("%c",str[i]);
		}
	
	}
}
else{
	printf("Enter valid Index:");
}
	
	
}
