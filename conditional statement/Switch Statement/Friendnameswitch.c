#include<stdio.h>
int main()
{
	char mr;
	printf("Enter First Character:\t");
	scanf("%c",&mr);
	
	switch(mr){
		case 'z':
			printf("zunzya");
			break;
				
				case 'a':
				printf("Atharya");
				break;
					
					case 'b':
						printf("Balya");
						break;
						
						default:
							printf("Undefined Name Please Valid Character:");
							break;
							
					
							}
}
