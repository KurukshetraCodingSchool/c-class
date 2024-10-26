#include<stdio.h>

int main(){  
    int n = printf("Please enter a Size : ");
    scanf("%d",&n);
    int arr[n],rev[n];
    for (int  i = 0; i <n; i++)
    {
        printf("Enter element  %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i= 0; i<n ; i++){
        rev[n-i-1] = arr[i];
    }
    printf("\n");
   
     printf("This is Orginal Array");
      printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("]");

      printf("\n");
      
      printf("This is Reversed Array");
       printf("[");
    for(int i = 0; i<n; i++){
        printf("%d , ",rev[i]);
    }
     printf("]");
}