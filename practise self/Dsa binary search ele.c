#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};   //Declare array
	int low=0;    //Array index lower 0 indicates
	int up=4;     //array index top length high positin index 4 indicates.
	int mid;      //mid find this reason to declare these variable formula=....mid=(low+up)/2
	int flag=0;   //Element finds first step to exucute loop and out to the loop.
	int ele=3;    //what element is finds this is variable.
	
	while(low<=up){
		
		mid=(low+up)/2;   //this is mid and compare all condition and exucute n block
		
	if(arr[mid]==ele){  //they check element is find  to exucute this block.
		flag=1;         //this condion true element found to out to the loop and try outside condition.
		break;
	}
	if(arr[mid]<ele){   //This is check element is greter of mid elemnt then search right side of array  
		up=mid+1;
	}
	else{              //this is check left side of array.
		low=mid-1;
	}
	}

	if(flag==1){
		printf("\nElement Is Found");
		printf("\nIndex Of Searching Ele is:%d",mid);
	}
	else{
		printf("Element Is Not Found");
	}
}
