//#include<stdio.h>
//int main(){
//	FILE *ab;
//	ab=fopen("first.txt","w");
//	fprintf(ab,"This is rainy season");
//	
//	fclose(ab);
//	printf("file successfully created");
//}

/*#include<stdio.h>

int main()
{
	FILE*ab;
	char data[100];
	
	ab=fopen("first.txt","r");
	
	while(fscanf(ab,"%s",data)!=EOF){
		printf("%s ",data);
	
	}
	rewind(ab);
	
	while(fscanf(ab,"%s",data)!=EOF){
		printf("\n %s ",data);
	}
	fclose(ab);
}*/


#include<stdio.h>
int main()
{
	FILE*ab;
	char m;
	
	ab=fopen("first.txt","r");
	
	while((m=fgetc(ab)!=EOF){
		printf("%c",m);
	}
fclose(m);	
}




