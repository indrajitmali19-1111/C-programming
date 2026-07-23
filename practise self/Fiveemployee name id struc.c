#include<stdio.h>
int mani(){
struct employee{
int id;
char name[20];
		
};
int main()
{
struct student st[5];
int i;
		
for(i=0;i<5;i++){
printf("\n Enter id: ");
scanf("%d",&st[i].id);
printf("\n Enter Name: ");
scanf("%s",&st[i].name);
}
		
printf("\n\nEmployee Record");
		
for(i=0;i<5;i++){
	printf("\nID:%d , \nName:%s",st[i].id,st[i].name);
		}
	return 0;
}
	
}
