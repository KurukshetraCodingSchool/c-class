#include<stdio.h>


int main(){
   int n =  printf("Hello Please enter a number ");
 scanf("%d",&n);
 for(int i = n; i>=1; i--){
    for(int j  = 1; j<i+1; j++){
 printf("* ");
    }
    printf("\n");
   
 }

}