#include <stdio.h>

int main() {
    int a = 10, b = 20;
    // if (a>b){
    //     printf("The maximum is: %d\n", a);
    // }
    // else{
    //     printf("The maximum is: %d\n", max);
    // }
    int max;

    // Using the ternary operator to find the maximum of two numbers
    max = (a > b) ? a : b;

    printf("The maximum is: %d\n", max);

    
}
