#include<stdio.h>
int main()
{
	char mr;
	printf("Enter a Character\n\t");
	scanf("%c",&mr);
	
	switch(mr){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("this is vowel");
		break;
	
	     default:
		
			printf("This is not ovel");
			break;
		}
}
