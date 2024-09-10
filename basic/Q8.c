#include "stdio.h"
#include "math.h"

int main(){
    float principle ,rate ,time;
    printf("Enter the principle amount: ");
    scanf("%f",&principle);
     printf("Enter the rate: ");
    scanf("%f",&rate);
     printf("Enter the time: ");
    scanf("%f",&time);
    float amount = principle* pow((1 + (rate /100)),time ) ;
    float c_i =  amount - principle;
    printf("The compound interest is: %.2f",c_i);

    
}
