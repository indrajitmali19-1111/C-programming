#include<stdio.h>
int main(){
int i=2,j=3,k,l;
float a,b;
k=i/j*j;  //k=2/3*3=0*3=0
l=j/i*i;  //l=3/2*2=1*2=2
a=i/j*j;  //a=2/3*3=0.666*3=0.666 ans is 0
b=j/i*i; //b=3/2*2=1.5*2=1.5 ans is 1.5
printf("k=%d l=%d a=%f b=%f",k,l,a,b);
return 0;
}
