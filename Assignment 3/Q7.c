#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number%3==0 ){
        printf("The number is  divisible by 3 \n");
    }
    else{
        printf("The number is not divisible ");
    }

     if(number%2==0 ){
        printf("The number is divisible by 2 ");
     }
    else{
        printf("The number is not divisible");
    }
    return 0;
}