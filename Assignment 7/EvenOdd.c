#include<stdio.h>
int Even(int num){
    return (num %2==0);
}
int Odd(int num){
    return(num%2 !=0);
}
int main(){
    int num;

    scanf("%d",&num);

    if(Even(num)){
        printf("The %d is even\n",num);
    }
    else{
        printf("The %d is odd\n",num);
    };
    return 0;
}