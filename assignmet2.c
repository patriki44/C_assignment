#include<stdio.h>
#include<math.h>

int main() {
	double A ;
	float P ;
	float R ;
	float N ;
	float T ;
	
	/**
	A=final_amount_including_intrest;
	P=principle_amount;
	R=intrest_rate;
	N=number of compounding_a_year;
	T=total_number_of_years;
	*/
	
	
	
	printf("enter P:  ");
	scanf("%f",&P);
	
	printf("enter R :  ");
	scanf("%f",&R);
	
	printf("enter N :  ");
	scanf("%f",&N);
	
	printf("enter Time in years :  ");
	scanf("%f",&T);
	
    
    double Base = P*(1+R/N);
	double Expo = (N*T);
	A = pow(Base, Expo);
	printf("Base is %lf", Base);
	printf("Expo is %lf", Expo);
		
	printf("A is %.2lf",A);
	
	return 0;
	
	
}
