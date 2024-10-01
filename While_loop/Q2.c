#include<stdio.h>

int main(){
    int a = printf("Enter a number : ");
    scanf("%d",&a);
    int rem;
    int sum = 0;
    while (a>0)
    {
      rem = a%10;
      sum +=rem;
    //   sum = sum+rem;
      a = a/10;
    }
   printf("Sum of all digit = %d",sum);
    
}
