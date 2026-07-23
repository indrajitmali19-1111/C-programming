#include<stdio.h>
int main()
{

int subjects;
printf("Enter The Subjects You Have:\n ");
scanf("%d",&subjects);
int arr[subjects];
printf("\nEnter The Marks Of Each Sbjects:\n");
char a='a';
for(int i=0;i<subjects;i++){
printf("%c :",a);
scanf("%d",&arr[i]);
a++;
}
int total=0;
for(int i=0;i<subjects;i++){
total=total+arr[i];
}
printf("The total marks of Studentis :%d",total);
float sum=0;
sum=total/subjects;
printf("\nThe Percentage Marks Of Student is :%2f",sum);



}