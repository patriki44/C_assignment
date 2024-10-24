#include<stdio.h>
#include<string.h>

struct book{

	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
};


int main(){
	struct book b;
	
	strcpy(b.author,"introduction to C programming");
	strcpy(b.author,"john smith");
	b.publicationyear=2022;
	strcpy(b.ISBN,"9780131103627");
	b.price = 49.99;
	
	printf("\nEnter title :  ");
	scanf("%29s",b.title);
	printf("%29s",b.title);
	
	printf("\nEnter author :  ");
	scanf("%29s",b.author);
	printf("%29",b.author);
	
	printf("\nEnter publication year :  ");
	scanf("%d",&b.publicationyear);
	printf("%d",b.publicationyear);
	
	printf("\nEnter ISBN:   ");
	scanf("%12",b.ISBN);
	printf("%12",b.ISBN);
	
	printf("\nEnter price :   ");
	scanf("%f",&b.price);
	printf("%f",b.price); 
	
	return 0;
	
}
