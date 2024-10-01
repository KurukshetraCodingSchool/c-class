#include<stdio.h>

int main(){
      int a = printf("Enter a number : ");
    scanf("%d",&a);
    int rem;
    while (a>0)
    {
      rem = a%10;
      printf("%d\n",rem);
      a = a/10;
    }
   
    
}
