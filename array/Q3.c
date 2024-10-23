#include<stdio.h>

int main(){
     int n = printf("Enter size of an array : ");
    scanf("%d",&n);
     int arr[n];
     int size = sizeof(arr)/sizeof(arr[0]);
     int first = -1 , second  = -1;
    
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

     for (int i = 0; i<size; i++){
        if (arr[i] > first) {
            second= first;
            first = arr[i];
     }
      else if(arr[i]>second && arr[i] !=first){
        second = arr[i];
      }
}

if (second == -1)
{
   printf("\nThere is not second greatest element . \n");
}
else{
    printf("\nSecond greatest element is : %d\n",second);
}
}