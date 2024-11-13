#include<stdio.h>

int main(){
    int arr [5] = {1, 2, -3, -4, -5};
    int size  = sizeof(arr) / sizeof(arr[0]);
    int negative = 0;
    int postive =0;
    for (int i = 0; i <size; i++)
    {
        if (arr[i]<negative)
        {
            printf("%d",arr[i]);
        }
        
    }
    printf("\n");

     for (int i = 0; i <size; i++)
    {
        if (arr[i]>=postive)
        {
            printf("%d",arr[i]);
        }
        
    }
    
}