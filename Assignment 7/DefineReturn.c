#include<stdio.h>
int add(int a,int b )
{
     return a+b;
}
int main(){
    int sum,num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    sum = add(num1,num2);
    printf("The sum of %d and %d is %d\n",num2,num2,sum);
    return 0;
    
};