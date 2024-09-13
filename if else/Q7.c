#include "stdio.h"

int main(){
    int a , b ,c;
    printf("Enter three  value : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>c && a>b){
        printf("%d is largest",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}