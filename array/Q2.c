#include<stdio.h>

int main(){
     int n = printf("Enter size of an array : ");
    scanf("%d",&n);
     int arr[n];
     int size = sizeof(arr)/sizeof(arr[0]);
     int max = arr[0] , index = 0;
    
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
 

    for (int i = 0;i<size;  i++){
        if (arr[i]>max)
        {
            max = arr[i];
         index =i;
        }
        

}
// length of arr  = 5

printf("\nGreatest element  is %d at index %d\n",max,index);

}

