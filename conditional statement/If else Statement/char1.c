#include<stdio.h>
int main()
{
	char mr;
	printf("Enter The Word:");
	scanf("%c",&mr);
	
	if(mr=='a' ||  mr=='e'  || mr=='i'  || mr=='o'  || mr=='u'){
		printf("%c The word is vowel");
	}
	
	else{
		printf("%c The word is not vowel");
	}
}
