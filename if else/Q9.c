#include<stdio.h>

int main(){
    float amount;
    printf("Enter the amount: ");
    scanf("%f",&amount);
    float discount ;
    if (amount>5000)
    {
        discount = (amount*10)/100;
        printf("Discount is %.2f\n",discount);
    }
    else if (amount<5000 && amount > 1000)
    {
        discount = (amount*5)/100;
        printf("Discount is %.2f",discount);
    }
    else if (amount>=1000)

    {
        discount = (amount*2)/100;
        printf("Discount is %.2f",discount);
    }
    else{
        printf("No discount");
    }
}
