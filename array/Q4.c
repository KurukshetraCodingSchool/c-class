#include<stdio.h>

int main(){
    int arr [] ={5 , 6 , 8 , 9};
  int size   = sizeof(arr)/sizeof(arr[0]);
  int sort = 1;


  for (int i = 0; i<size-1; i++){
    if (arr[i]>arr[i+1])
    {
        sort =0;
        break;
    }
   
  }
   if (sort){
        printf("Array is sortes in Increasing order.\n");
    }
    else
    {
        printf("Array is not  sortes in Increasing order.\n");

    }

}