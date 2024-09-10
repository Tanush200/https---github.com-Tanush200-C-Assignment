#include<stdio.h>
int main(){
    char arr[5]={'B','T','E','C','H',};
    for(int i = 0;i<5;i++){
        for(int j = 0;j<=i;j++){
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}