#include<stdio.h>
int main()
{
	int a,b;
	a=07;
	b=11;
	
	printf("Before swapping A:%d\n",a);
	printf("Before Swapping B:%d\n\n",b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After Swapping A:%d\n",a);
	printf("After Swapping B:%d",b);
}
