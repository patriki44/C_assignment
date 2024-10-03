#include<stdio.h>
int main (){
int age ;
float income ;

  printf("print age :   ");
  scanf("%d",&age);
  printf("print income :   ");
  scanf("%f",&income  );

  if (age <21 && income <21000){
  	 printf("unfortunately we are unable to offer at this time ");
  }
  else if (age >=21 && income >=21000){
  	printf("congratulation you qualify for a loan ");
  }
  else {
  	printf("invalid ");
  }
	return 0;
}

