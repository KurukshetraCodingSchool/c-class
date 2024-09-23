// Factorial 

#include "stdio.h"

int main(){
    int number = printf("Enter a number for found tha factorail : ");
     scanf("%d",&number);
     float factorial = 1;
     for (int i = number ; i>0;i--){
        factorial = factorial*i;
        // printf("%d\n",i);
     }
     printf("factorial of %d = %.2f",number,factorial);
}
