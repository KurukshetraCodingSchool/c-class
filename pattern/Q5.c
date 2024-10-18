#include<stdio.h>

int main(){
    for (int i = 1; i<=5; i++){   // outer loop  - row
        for (int  j = 1; j <=5-i; j++)  // inner loop - coloum
        {
            printf(" ");
        }
        for (int j = 1; j<=i; j++)  // inner loop - coloum
        {
            printf("*");
        }
        printf("\n");
    }
}