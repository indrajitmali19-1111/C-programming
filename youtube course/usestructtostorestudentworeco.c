#include<stdio.h>
#include<string.h>

struct student{
	int roll;
	char name[50];
	float per;
	char class[20];
};struct student s1,s2;

int main(){
	
	
	printf("Enter Roll No:");
	scanf("%d",&s1.roll);
	printf("Enter name:");
	scanf("%s",&s1.name);
	printf("Enter percentage:");
	scanf("%f",&s1.per);
	printf("Enter Class name:");
	scanf("%s",&s1.class);
	
	printf("\ninserted Record:\n");
	
	printf("%d",s1.roll);
	printf("\n%s",s1.name);
	printf("\n%f",s1.per);
	printf("\n%s",s1.class);
	
	printf("\n insert 2nd student record\n");
	printf("Enter Roll No:");
	scanf("%d",&s2.roll);
	printf("Enter name:");
	scanf("%s",&s2.name);
	printf("Enter percentage:");
	scanf("%f",&s2.per);
	printf("Enter Class name:");
	scanf("%s",&s2.class);
	
		printf("\ninserted Record:student2\n");
	
	printf("%d",s2.roll);
	printf("\n%s",s2.name);
	printf("\n%f",s2.per);
	printf("\n%s",s2.class);
	
}
