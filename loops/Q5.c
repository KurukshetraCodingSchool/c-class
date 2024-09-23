#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int sum = 0;
    for(int i = 1; i<number+1; i++){
        sum = sum+i;
    }
    printf("Sum of %d term = %d",number,sum);
}
// 1+2+3+4+5
// 3+3+4+5
// 6+4+5
// 10+5
// 15