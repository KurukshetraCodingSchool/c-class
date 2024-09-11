#include "stdio.h"

int main(){
    char gender ;
    printf("Enter your gender (m/f): ");
    scanf("%c",&gender);
    if (gender == 'm')
    {
        printf("Good Morning sir!");
    }
    else if (gender == 'f')
    {
        printf("Good morning ma'am !");
    }
    else
    {
        printf("Please enter right input!");
    }
}