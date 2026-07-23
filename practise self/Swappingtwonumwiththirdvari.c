#include<stdio.h>
int main()
{
	int a,b,c;
	a=07;
	b=11;
	
	printf("Before swapping A:%d\n",a);
	printf("Before Swapping B:%d\n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After Swapping A:%d\n",a);
	printf("After Swapping B:%d",b);
}
