#include<stdio.h>
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int sum[5];
    for(int i = 0;i<5;i++){
        sum[i]=arr1[i]*arr2[i];
    }
    for(int i = 0;i<5;i++){
         printf("%d ",sum[i]);
    }
    return 0;

}