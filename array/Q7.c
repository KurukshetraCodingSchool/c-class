#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    k = k%size;

        int temp [k];
    for (int i = 0; i<k; i++)
    {
        temp[i] =arr[i];
    }
    for(int i = 0; i<k; i++){
        arr[size-k+i] =temp[i];
    }

    for (int  i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
}