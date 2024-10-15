#include<stdio.h>


int main(){
   int n =  printf("Hello Please enter a number ");
 scanf("%d",&n);
 for(int i = 1; i<=n;i++){  // coloum 
    for(int j  = 1; j<i+1; j++){ // row 
 printf("%d ",j );
    }
    printf("\n");
   
 }

}