#include<stdio.h>
int main(){
    int num1 =  10;
    int num2 = 20;
    int sum;
    int *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1+*ptr2;
    printf("The value of sum is %d\n",sum);
    return 0;
}