#include <stdio.h>  
  
int main()  
{  
    FILE *fp;  
    char name[20];  
    int age;  
  
    fp = fopen("student.txt", "w");  
    fprintf(fp, "Rahul 25");  
    fclose(fp);  
  
    fp = fopen("student.txt", "r");  
    fscanf(fp, "%s %d", name, &age);  
  
    printf("Name: %s\n", name);  
    printf("Age: %d\n", age);  
  
    fclose(fp);  
  
    return 0;  
}  
