#include<stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int index = -1;
    for (int i = 0; i <size; i++)
    {
        if (arr[i] == target)
        {
           index = i;
           break;   
        }
      
        
    }
    if (index == -1)
    {
       printf("Element is not found");
    }
    else{
printf("Element is found of index =  %d ",index);
    }
    
    
    
}