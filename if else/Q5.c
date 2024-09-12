#include "stdio.h"

int main(){
    char user_name[50];
    int age;
    printf("Please enter your name : ");
    gets(user_name);
    printf("Please enter your age : ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Hello %s, you are valid for vote : ",user_name);
    }
    else
    {
        printf("Hello %s, you are invalid for vote : ",user_name);
    }
}