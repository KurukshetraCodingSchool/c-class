#include<stdio.h>

int main(){
    int a , b;
    printf("please enter two values: ");
    scanf("%d %d", &a,&b);
    if (a>b)
    {
        printf("A is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }
}