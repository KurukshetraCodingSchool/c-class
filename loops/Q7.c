#include "stdio.h"

int main(){
    int number = printf("Enter a number : ");
    int sumEven = 0,sumOdd = 0;
    scanf("%d",&number);
    for (int i = 1; i<=number; i++){
        if (i%2 == 0) sumEven +=i;
        else sumOdd +=i;
}
printf("Sum of even numbers is %d\n",sumEven);
printf("Sum of odd numbers is %d\n",sumOdd);
}