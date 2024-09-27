#include <stdio.h>

int main(){
   int num = printf("Enter a number for check is prime or not : ");
   int count = 0;
   scanf("%d",&num);
    if (num<=0){
      printf("It's not a prime numebr ");
      return 0;
    }
    for (int i = 2 ; i<num/2 ; i++){
      if (num % i == 0){
     count +=1;
    }
  
}
  if (count==0){
      printf("It's prime number ");
    }
    else
    {
      printf("It's not a prime number ");
    }
}