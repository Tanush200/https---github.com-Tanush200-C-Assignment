#include<stdio.h>
int main(){
    int num1, num2, num3 ;
    float average;
    printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3 );

    average = ( num1+num2+num3)/3;

    printf("The average of %d , %d and %d is: %.2f\n" ,num1, num2, num3, average );
    return 0;
}