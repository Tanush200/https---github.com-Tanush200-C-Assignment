#include<stdio.h>
int main(){
    int side1 , side2 , area , perimeter;
    printf("Enter two sides : ");
    scanf("%d%d",&side1,&side2);

    area = side1*side2;
    perimeter = 2*(side1+side2);

    printf("the area of rectangle is: %d\n",area);
     printf("the perimeter of rectangle is: %d\n",perimeter);
     return 0;
}