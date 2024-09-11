#include<stdio.h>

int main(){
    int n;
    printf("Please enter a number : ");
    scanf("%d",&n);
    if(n%2==1){
        printf("%d is odd",n);
    }
    else
    {
        printf("%d is even",n);
    }
}