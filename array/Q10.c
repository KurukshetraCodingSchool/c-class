#include<stdio.h>

int main(){
    int arr[] = {1,3,5,7,9,11,13,15};
    int size  = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int left = 0;
    int right = size - 1;    // right = 7
    int index = -1;  
    while (left<=right)
    {
        int mid = left+(right-left)/2;
        
        if (arr[mid]== target)
        {
            index =mid;
            break;
        }
        else if(arr[mid]>target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        
    }
    if (index!=-1)
    {
        printf("Element Found at index %d",index);
    }
    else{
        printf("Elemnt Not Found");
    }
    
    
}