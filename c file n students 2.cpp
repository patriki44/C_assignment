#include<stdio.h>
#include<stdlib.h>

struct student {
	char name[50];
    int marks;
    
}student;

int main (){
int n,i;
 FILE*fptr;
 
 printf("Enter number of students:");
 scanf("%d",&n);
 
 //Enter and read students data
 for(i=0;i<n;i++){
 	printf("Enter name and marks for student:");
 	scanf("%s %d" ,student.name ,&student.marks);
 }
 
 //open file in append mode 
  fptr=fopen("student.txt","a");
 if (fptr==NULL){
 	perror("Error opening file");
 	exit(0);
 }
 //write student info 
 for (i=0;i<n;i++){
 	fprintf(fptr,"%s %d\n",student.name,student.marks);
 }
 fclose(fptr);
 printf("student information written to file ,\n");
 return 0;
 
 	
	
}
 
 
 
 
 
 
 
 
