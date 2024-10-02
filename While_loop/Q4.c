#include<stdio.h>

int main()
{
    int n= printf("Enter a number : ");
    int rem;
    int rev = 0;
    scanf("%d",&n);
    int temp = n;
    while(temp>0){
        rem = temp%10;
        rev = rev*10+rem;
        temp/=10;
    }
    // printf("Reverse number = %d\n",rev);
    // printf("Orginal Number = %d",n);

    if (rev == n) printf("It's a palidromic number \n");
    else printf("It's not a palidromic number \n");
    
}