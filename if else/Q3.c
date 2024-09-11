#include "stdio.h"

int main(){
    char gender ;
    printf("Enter your gender (m/f): ");
    scanf("%c",&gender);
    if (gender == 'm' || gender == 'M' )
    {
        printf("Good Morning sir!");
    }
    else if (gender == 'f' || gender == 'F')
    {
        printf("Good morning ma'am !");
    }
    else
    {
        printf("Please enter right input!");
    }
}