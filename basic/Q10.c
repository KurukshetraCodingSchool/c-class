//  Find surface area of sphere 


// 4 pai r square

#include "stdio.h"
#include "math.h"


int main(){
         int r;
         printf("Enter radius of sphere: ");
         scanf("%d",&r);
         float area_of_sphere = 4 * 3.147 * pow(r,2);
         printf("Surface area of sphere is: %.2f",area_of_sphere);
}
