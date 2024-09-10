#include<stdio.h>
int main(){
    int radius;
    float area , perimeter;

    printf("Enter the radius :");
    scanf("%d",&radius);

    area = 3.14*radius*radius;
    perimeter = 2*3.14*radius;

    printf("The area is: %.2f\n",area);
    printf("The perimeter is: %.2f\n",perimeter);
    return 0;

}