#include<stdio.h>
#include<string.h>

struct student{
	int roll_no;
	char name[50];
	float per;
};struct student s1,s2;

int main(){
	
	printf("Enter roll no:");
	scanf("%d",&s1.roll_no);
	printf("Enter name:");
	scanf("%s",&s1.name);
	printf("Enter percentage:");
	scanf("%f",&s1.per);
	
	printf("\n Inserted Details:\n");
	printf("%d\n",s1.roll_no);
	puts(s1.name);
	printf("%f",s1.per);
	
}
