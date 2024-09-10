// Accept two numbers from user and swap their values
#include<stdio.h>

int main(){
    int a , b;
    printf("please enter first number : ");
    scanf("%d",&a);
     printf("please enter second number : ");
    scanf("%d",&b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("a = %d , b = %d" ,a,b );
}