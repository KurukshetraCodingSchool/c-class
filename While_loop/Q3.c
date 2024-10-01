#include<stdio.h>

int main(){
  int a = printf("Enter a number : ");
  scanf("%d",&a);
  int rem;
  int rev = 0;
   while (a>0)
   {
    rem = a%10;
    rev = rev*10+rem;
    a = a/10;
   }
   printf("%d\n",rev);
   printf("%d",a);
}
     

