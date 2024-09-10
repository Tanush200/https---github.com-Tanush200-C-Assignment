#include<stdio.h>
int sumDigit(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10)+sumDigit(num/10);

    }
}
    int main(){
        int sum , num;
        scanf("%d",&num);

        sum = sumDigit(num);

        printf("The sum of the digits of %d is : %d\n",num,sum);
        return 0;
    }
