#include <stdio.h>
int main() {
    int principle_amount_in_ksh;
    int time_in_months;
    float rate_in_decimals;
    float simple_intrest;
    
//simple_intrest=(principle_amount_in_ksh*time_in_months*rate_in_decimals )/100;


printf("\nEnter P");
scanf("%d", &principle_amount_in_ksh);
printf("\nYour P is %d", principle_amount_in_ksh);

printf("\nEnter T");
scanf("%d", &time_in_months);
printf("\nYour T is %d", time_in_months);

printf("\nEnter R");
scanf("%f", &rate_in_decimals);
printf("\nYour R is %f", rate_in_decimals);



simple_intrest=(principle_amount_in_ksh*time_in_months*rate_in_decimals)/100;

printf("\nSI is %f ", simple_intrest);

return 0;
}
