//file handeling

//#include<stdio.h>
//int main(){
//	FILE *fp;
//	fp=fopen("Student.txt","w");
//	
//	
//	fprintf(fp," name: Indrajeetsm\n");
//	fprintf(fp," Address: malewadi kotoli\n");
//	fprintf(fp," Pincode: 315409\n");
//	
//	fclose(fp);
//	printf("student Record Saved");
//	return 0;
//}


#include<stdio.h>
int main()
{
	FILE *mi;
	mi=fopen("student2.txt","r");
	char data[200];
	
	while(fgets(data,sizeof(data),mi)){
		printf("%s",data);
		
	}
	fclose(mi);
	return 0;
}

