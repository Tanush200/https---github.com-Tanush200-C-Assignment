#include<stdio.h>
int maximum(int a , int b){
    return (a>b)?a:b;
}
int minimum(int  a,int b){
    return (a<b)?a:b;
}
int main(){
    int num1,num2,max,min;
    scanf("%d",&num1);
    scanf("%d",&num2);

    max = maximum(num1,num2);
    min = minimum(num1,num2);


    printf("The max number b/w %d and %d is %d\n",num1,num2,max);
     printf("The min number b/w %d and %d is %d\n",num1,num2,min);
}