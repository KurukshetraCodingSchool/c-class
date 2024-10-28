#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    // step - 1 : save the first  element of the array in a variable
    int one = arr[0];

    for (int i = 1; i <n; i++)
    {
        arr[i-1]= arr[i];

    }

    arr[n-1]= one;

    for  (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

return 0;
    
}