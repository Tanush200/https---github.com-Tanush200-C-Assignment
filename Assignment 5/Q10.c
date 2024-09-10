#include<stdio.h>
int main(){
    int n =10;
    int row=4;
    for(int i=0;i<row;i++){
         for(int j=0;j<row-i;j++){
            printf("%d ",n--);
         }
         printf("\n");
    }
    return 0;

}