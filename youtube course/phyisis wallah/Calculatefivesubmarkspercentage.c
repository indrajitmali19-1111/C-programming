#include<stdio.h>
int main()
{
	float m1=60,m2=50,m3=50,m4=90,m5=67;
	printf("%f",m1+m2+m3+m4+m5/5); //Rong output Because Bodmas Method follow compiler
	                               //BODMAS
	printf("\nThe Percentage:%f",(m1+m2+m3+m4+m5)/5);//Right Output Use The Bodmas Method
}
