// Part 2 - Swap without using third variable
#include<stdio.h>

int main(){

    int a , b;
    printf("please enter first number : ");
    scanf("%d",&a);
     printf("please enter second number : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d , b = %d" ,a,b );
}