#include<stdio.h>

int main(){
  int n = printf("Enter a number : ");
  scanf("%d",&n);
int square = n*n;
int temp = n;
int lastDigit = 0;
while (temp>0){
    lastDigit = (lastDigit*10)+(square%10);
        square/=10;
        temp/=10;
}

  int revLastDigit = 0;
  int rem ;
  while (lastDigit>0)
  {
    rem = lastDigit%10;
    revLastDigit = (revLastDigit*10)+rem;
    lastDigit/=10;
  }

  if (n==revLastDigit){
    printf("It's a automorphic number");
  }
  else
  {
    printf("It's not a automorphic number");
  }
  
}