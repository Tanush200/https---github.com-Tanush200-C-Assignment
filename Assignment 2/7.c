#include<stdio.h>
#include<math.h>
int main(){
     float area;
     float radius;
     float perimeter;
    printf("Enter the area: ");
    scanf("%f",&area);

    radius = sqrt(area/3.14);
    perimeter =2*3.14*radius;

    printf("The radius is : %.2f\n",radius);
    printf("The perimeter is : %.2f\n",perimeter);
    return 0;

}