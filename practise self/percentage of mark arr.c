#include<stdio.h>
int main()
{
	int count;
	printf("How many Number of Sub");
	scanf("%d",&count);
	
	printf("EnterMarks Of Each:\n");
	
	int arr[count];
	int i;
	for(i=0;i<count;i++){
		scanf("%d",&arr[count]);
	}
	
	int sum;
	for(i=0;i<count;i++){
		sum=sum+arr[count];
	}
	float avg;
	avg=sum/count;
	printf("Percentage is:%2f",avg);
	
	
}
