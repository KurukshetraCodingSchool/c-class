#include<stdio.h>


int main(){
   int n = 5;

 for (int i = 1; i<=n; i++){
    for (int  j = 1; j<=i ; j++)
    {
        printf(" ");
    }
    printf("*");
    if (i<=n-1){
        for (int j = 0; j <= 2*(n-i-1); j++)
        {
           printf(" ");
        }
        printf("*");
    }
    printf("\n");
    
    
 }

}


