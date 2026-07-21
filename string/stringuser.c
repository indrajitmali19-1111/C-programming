//#include<stdio.h>
//struct emp{
//	int id;
//	char name[10];
//}e1;
//
//int main(){
//	int id;
//	char name[100];
//	
//printf("Enter id:");
//scanf("%d",&id);
//
//printf("Enter Name:");
//scanf("\n%s",&name);
//
//printf("%d,%s",id,name);
//
//	
//}

//#include<stdio.h>
//#include<string.h>
//
//
//	struct emp{
//		int id;
//		char name[100];
//		
//	}e1;
//int main(){
//	
//	e1.id=101;
//	strcpy(e1.name,"xyz");
//	
//	printf("id=%d",e1.id);
//	printf("\n name=%s",e1.name);
//}
//	

#include<stdio.h>
#include<string.h>

struct emp{
	int id;
	char name[100];
	
}e1;

int main(){
	
	int id;
	char name[10];
	
	printf("Enter ID:");
	scanf("%d",&id);
	printf("Enter name:");
	scanf("%s",&name);
	
	 e1.id=id;
	 strcpy(e1.name,name);
	 
	 printf("id=%d",e1.id);
	 printf("\n name=%s",name);
}







