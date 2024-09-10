#include<stdio.h>
#include<math.h>
int main(){
    int a , b, c;
    float Semi , area , perimeter;
    printf("The sides are: ");
    scanf("%d%d%d",&a,&b,&c);

    Semi= (a+b+c)/2;
    area = sqrt(Semi*(Semi-a)*(Semi-b)*(Semi-c));
    
    perimeter = (a+b+c);

    printf("The area is:%.2f\n",area);
    printf("The perimeter is:%.2f\n",perimeter);


}