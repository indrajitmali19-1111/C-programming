#include<stdio.h>
int main()
{
    int i=2*3/4+4/4+8-2+5/8;
    printf("%d",i);
    return 0;
}

//calculatio i=   2*3/4=1.5 but int data type this reason to only 1 return
//                4/4=1
//                8-2=6
//                5/8=0.625 but int data type this reason to only 0 return
//                i=1+1+6+0===8 answer is 8