//  Find circumference and area of circle


#include "stdio.h"
#include "math.h"

int main(){
    double r, area, circumference;
    //  pai r square area
    //  2 pai r  circumference
    printf("Please enter raduis of circle");
    scanf("%lf", &r);
    area = 3.147 * pow(r,2);
    circumference = 2 * 3.147 * r;
    printf("Area of circle is %lf\n", area);
    printf("Circumference of circle is %lf\n", circumference);
}
