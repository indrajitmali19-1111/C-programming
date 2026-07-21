//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	FILE *zun;
//	char bal[100];
//	int i=0;
//	zun=fopen("Atharva.txt","w");
//	fprintf(zun,"Hello_Friends");
//	fclose(zun);
//	
//	zun=fopen("Atharva.txt","r");
//	fscanf(zun, "%s",bal);
//	while(bal[i] != '\0'){
//		printf("%c",bal[i]);
//		i++;
//	}
//	fclose(zun);
//	return 0;
//	
//	
//}


//#include<stdio.h>
//#include<string.h>
//int main(){
//	
//	int i=0;
//	char atr[50];
//	FILE *at;
////	at=fopen("Atharva.txt","w");
////	fprintf(at,"My_name_is_Athrava");
////	fclose(at);
////	
//	at=fopen("Atharva.txt","r");
//	fscanf(at,"%s",atr);
//	
//	while(atr[i]!='\0'){
//		printf("%c",atr[i]);
//		i++;
//	}
//	fclose(at);
//	
//	
//	
//	
//}



#include<stdio.h>
#include<string.h>
int main(){
	int s;
	char ajit[60];
	
	FILE *aj;
	aj=fopen("Atharva.txt","r");
	
	fscanf(aj,"%s",ajit);
	
	while(ajit[s] =! '\0'){
		printf("%c",ajit[s]);
		s++;
	}
	fclose(aj);
}

