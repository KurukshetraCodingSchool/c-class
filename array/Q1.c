#include<stdio.h>

int main(){
       int n = printf("Enter size of an array : ");
       scanf("%d",&n);
       int arr[n];
       float sum= 0;
       for (int i = 0; i <n; i++)
       { 
              printf("Enter element : %d = ",(i+1));
              scanf("%d",&arr[i]);
                
       }
       printf("\nArray elements are : ");
   printf("{");
     for (int i = 0; i<n; i++ ){
       printf("%d",arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
     }
     printf("}");

    for (int i = 0; i<n; i++){
       sum  = sum + arr[i];

    }
    printf("\nSum of all element in array = %f",sum);

   float size = sizeof(arr) / sizeof(arr[0]);
    float mean = sum/size;
    printf("\nMean of all element in array = %f",mean);
}