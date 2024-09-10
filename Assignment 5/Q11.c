#include<stdio.h>
int main(){
    int n=10;
    for(int i = 0;i<4;i++){
        for(int j=0;j<i;j++){
            printf(" ");

        }
        for(int j = 0;j<4-i;j++){
            printf("%d",n);
            n--;


        }
        printf("\n");
    }
    return 0;
}