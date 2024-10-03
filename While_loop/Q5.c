#include<stdio.h>

int main()
{
    int n = printf("Please enter a number : ");
    scanf("%d", &n);
    int rem = 0;
    int sum = 0;
    int temp = n;
    while (temp>0)
    {
        rem = temp%10;
        int fact = 1;
        for (int i = rem; i>=1; i--){
            fact = fact*i;
        }
        sum  = sum+fact;
        temp/=10;
    }
    if (n==sum)
        printf("It's a strong number");
    else
        printf("It's not a strong number");
}