#include<stdio.h>
int main()
 {
 	int ps;
 	printf("Enter Month Number:");
 	scanf("%d",&ps);
 	
 	switch(ps){
 		
 		case 1:
 			printf("January");
 			break;
 			
 			case 2:
 				printf("February");
 				break;
 				
 				case 3:
 					printf("March");
 					break;
 					
 					case 4:
 						printf("April");
 						break;
 						
 						case 5:
 							printf("May");
 							break;
 							
 							case 6:
 								printf("June");
 								break;
 								
 								
 								case 7:
 									printf("July");
 									break;
 									
 									case 8:
 										printf("Augast");
 										break;
 										
 										case 9:
 											printf("Saptember");
 											break;
 											
 											case 10:
 												printf("Auctomber");
 												break;
 												
 												case 11:
 													printf("November");
 													break;
 													
 													case 12:
 														printf("December");
 														break;
 														
 														
 														
 														default:
 															printf("Invalid Number and Month");
 															break;
 						
	 }
 }
