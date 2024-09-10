#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2, num3;
    int maximum;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    maximum = fmax(num3,fmax(num1,num2));

    printf("The maximum number is : %d\n",maximum);
    return 0;
}