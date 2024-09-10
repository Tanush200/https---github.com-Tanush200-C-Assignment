#include<stdio.h>
int main(){
    char current = 'A';
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5-i;j++){
            printf("%c ",current);
            current++;
        }
        printf("\n");
    }
    return 0;
}