#include <stdio.h>
#include <math.h>
int main()
{
    char choice;
    int a, b;
    char choice1;
    double result;
    do
    {
        printf("Welcome to  My calculator !\n");
        printf("Press + for addition\n");
        printf("Press - for subtraction\n");
        printf("Press * for multiplication\n");
        printf("Press / for division\n");
        printf("Press ^ for Power \n");
        printf("Press S for square root\n");
        printf("Press l for logarithm \n");
        printf("Press e for Exponential \n");
        printf("Press s for  Trigonometric sin \n");
        printf("Press c for Trigonometric cos  \n");
        printf("Press t for Trigonometric tan \n");
        printf("Press 5 for exit\n");

        printf("Enetre a number for choice : ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '+':
            printf("You Choose Addition\n");
            printf("Enter First Value numbers : ");
            scanf("%d", &a);
            printf("Enter Second Value numbers : ");
            scanf("%d", &b);
            printf("Addition : %d\n", a + b);
            break;

        case '-':
            printf("You Choose Subtraction\n");
            printf("Enter First Value numbers : ");
            scanf("%d", &a);
            printf("Enter Second Value numbers : ");
            scanf("%d", &b);
            printf("Subtraction : %d\n", a - b);
            break;
        case '*':
            printf("You choose Multiplication\n");
            printf("Enter First Value numbers : ");
            scanf("%d", &a);
            printf("Enter Second Value numbers : ");
            scanf("%d", &b);
            printf("Multiplication : %d\n", a * b);
            break;

        case '/':
            printf("You choose Division\n");
            printf("Enter First Value numbers : ");
            scanf("%d", &a);
            printf("Enter Second Value numbers : ");
            scanf("%d", &b);
            if (b != 0)
            {
                printf("Division : %d\n", a / b);
            }
            else
            {
                printf("Error!");
            }
            break;

        case '^':
            printf("Enter First Base : ");
            scanf("%d", &a);
            printf("Enter Second exponent : ");
            scanf("%d", &b);
            result = pow(a, b);
            printf("result =%.2lf", result);
            break;

        case 'S':
            printf("Enter First Base : ");
            scanf("%d", &a);
            if (a >= 0)
            {
                result = sqrt(a);
                printf("result =%.2lf", result);
            }
            else
            {
                printf("Error !");
            }
            break;
            case 'l':
            printf("Enter a  number : ");
            scanf("%d",&a);
            if (a>0){
                result = log(a);
                printf("Natural logrithm (IN) of %.d is %.2lf ",a,result);
            }
            else{
                printf("Error! Logarithm of a non-positive number is underfined. \n");
            }
            break;

            case 'e':
            printf("Enter a numebr : ");
            scanf("%d",&a);
            result =  exp(a);
            printf("Exponentail (e^%d) is %.2lf\n",a,result);
            break;

            case 's':
            printf("Enter a number : ");
            scanf("%d",&a);
            result =sin(a);
            printf("Sine of %d radians is %.2lf\n",a,result);
            break;

            case 'c':
            printf("Enter a number : ");
            scanf("%d",&a);
            result =cos(a);
            printf("Cos of %d radians is %.2lf\n",a,result);
            break;
            case 't':
            printf("Enter a number : ");
            scanf("%d",&a);
            result =tan(a);
            printf("Tan of %d radians is %.2lf\n",a,result);
            break;

        default:
            printf("Thank you!");
            break;
        }
        printf("\nDo you want to perform another calculation ? so please press (y/n) :  ");
          getchar();
        scanf("%c",&choice1);

    } while (choice1 == 'y' || choice1 =='Y');
    printf("Calculation Program has ended \n");
}


//  Color 
//  Clear 
