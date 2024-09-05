// Accept the User's name, age and print in following manner 
// a. Ex - Hello Kurukshetra, you are 12 years old.
#include "stdio.h"

int main(){
    char user_name [20];
    int age;
    printf("Enter a user name: ");
    gets(user_name); // full length accpect with space.
    // scanf("%s",&user_name);
    printf("Enter your age: "); // full length accpect without space.
    scanf("%d",&age);
    printf("Hello %s , you are %d year old. ",user_name,age);
}