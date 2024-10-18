#include<stdio.h>


int main(){
   int n =  printf("Hello Please enter a number ");
 scanf("%d",&n);


for(int  i=0;i<n;i++){
 for(int j = 0; j<n; j++){

    if(i==j || j== n-i-1){
        printf("* ");
    }
    else{
        printf(" ");
 }

}

 printf("\n");
}
}