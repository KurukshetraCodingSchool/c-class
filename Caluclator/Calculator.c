#include<stdio.h>

int main(){
    int choice;
     int a,b;
    do
    {
        printf("Welcome to  My calculator !\n");
        printf("Press 1 for addition\n");
        printf("Press 2 for subtraction\n");
        printf("Press 3 for multiplication\n");
        printf("Press 4 for division\n");
        printf("Press 5 for exit\n");
    } while (5>6);
    printf("Enetre a number for choice : ");
    scanf("%d",&choice);
    if (choice==5){
        return 0;
    }
    switch (choice)
    {
    case 1:
        printf("You Choose Addition\n");
        printf("Enter First Value numbers : ");
       scanf("%d",&a);
        printf("Enter Second Value numbers : ");
        scanf("%d",&b);
        printf("Addition : %d\n",a+b);
        break;
     
    case 2:
        printf("You Choose Subtraction\n");
        printf("Enter First Value numbers : ");
       scanf("%d",&a);
        printf("Enter Second Value numbers : ");
        scanf("%d",&b);
        printf("Subtraction : %d\n",a-b);
        break;
    case 3:
    printf("You choose Multiplication\n");
    printf("Enter First Value numbers : ");
       scanf("%d",&a);
        printf("Enter Second Value numbers : ");
        scanf("%d",&b);
        printf("Multiplication : %d\n",a*b);
        break;    

    case 4:
        printf("You choose Division\n");
        printf("Enter First Value numbers : ");
       scanf("%d",&a);
        printf("Enter Second Value numbers : ");
        scanf("%d",&b);
        printf("Division : %d\n",a/b);
        break;   
    default:
        printf("Thank you !");
        break;
    }
    
}