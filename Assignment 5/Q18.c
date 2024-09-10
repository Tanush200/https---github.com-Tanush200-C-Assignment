#include<stdio.h>
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i=i+2){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j =0; j<i;j++){
            printf("* ");
        }
        printf("\n");

    }
    for(int i = n-1;i>0;i--){
        if(i==3) continue;
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j =0; j<i;j++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;

}