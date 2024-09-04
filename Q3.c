//  Accept two integers from user and print the sum (Ex - The sum of 45 & 12 = 57).

#include<stdio.h>

int main(){
   int a , b;
   printf("Please enter first value : ");
    scanf("%d", &a);
    printf("Please enter second value : ");
   scanf("%d",&b);
   int sum = a+b;
    printf("The sum of %d & %d = %d",a,b,sum);

}