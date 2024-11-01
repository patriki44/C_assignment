#include<stdio.h>
#include<stdlib.h>

struct students{
	char name [50];
	int marks ;
	

}student

 int main (){
	struct student students[5];
	FILE*fptr;
	int i;
	
	//read students information 
	for(i=0;1<5;i++){
		printf("Enter name and marks for students %d:",i+1);
		scanf("%sv%d",student1[i].name,&students[i].marks);
	}
	//open file in write mode 
	fptr=fopen("students.txt","w");
	if (fptr==NULL){
		perror("Error opening file ");
		exit(0);
	}
	//write student information to a file 
	for (i=0;i<5;i++){
		fprintf(fptr,"%s %d\n",students[i].name,students[i].marks);
	}
fclose(fptr);
 printf("student information written to a file.\n");
return 0;
}
