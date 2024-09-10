#include<stdio.h>
int main(){
        int side1, area , perimeter;
    printf("Enter the side : ");
    scanf("%d",&side1);

    area = side1*side1;
    perimeter = 4*side1;

    printf("the area of rectangle is: %d\n",area);
     printf("the perimeter of rectangle is: %d\n",perimeter);
     return 0;
}
