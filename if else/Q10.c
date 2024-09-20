#include "stdio.h"

int main(){
    int units;
    printf("Enter the number of units: ");
    scanf("%d",&units);
    float billAmount ;
    if(units>500){
       billAmount = units*10;
       printf("You bijli bill : %.2f",billAmount);
    }
    else if (units<500  && units>200)

    {
        billAmount = units*7;
        printf("You bijli bill : %.2f",billAmount);
    }
    else if (units>=100)
    {
        billAmount = units*6;
        printf("You bijli bill : %.2f",billAmount);
    }
    else{
        printf("No Bijli Bill: ");
    }
}