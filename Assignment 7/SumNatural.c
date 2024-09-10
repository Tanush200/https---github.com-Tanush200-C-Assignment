#include<stdio.h>
int sumNatural(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sumNatural(n-1);
    }

}
int main(){
    int n=20;
    int sum = sumNatural(n);

    printf("The sum of first %d naturaL number is: %d\n",n,sum);
    return 0;
}