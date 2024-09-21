#include "stdio.h"
// Reverse loop
int main(){
    int n ;
    printf("Please enter a number ");
    scanf("%d",&n);
    for (int i = n; i>0;i--){
        printf("%d\n",i);
    }
}