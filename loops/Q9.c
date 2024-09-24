#include "stdio.h"

int main(){
    int number = printf("Enter a number : ");
    int sum = 0;
    scanf("%d", &number);
    for (int i = 1; i<=number; i++){
        if (number%i==0) sum+=i;
    }
    printf("Sum of divisors of %d is %d", number, sum);
}