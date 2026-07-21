//collection of multiple value va
#include<stdio.h>
struct student{
	int id;
	char name[10];
	
	
};
int main()
{
struct student s[5];
int i;

for(i=0;i<5;i++){
	printf("\nEnter id:");
	scanf("%d",&s[i].id);
	printf("\nEnter name:");
	scanf("%s",&s[i].name);
}	
printf("\n Student Information\n");

for(i=0;i<5;i++){
	printf("\nid:%d,name:%s",s[i].id,s[i].name);
}
return 0;	
}
