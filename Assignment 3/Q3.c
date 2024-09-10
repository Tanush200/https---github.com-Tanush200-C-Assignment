#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2;
    int maximum;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    maximum = fmax(num1,num2);
    printf("The maximum number is: %d\n",maximum);
     
    return 0;
}