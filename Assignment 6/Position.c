#include<stdio.h>
int main(){
    int num;
    int arr[5] = {1,2,3,4,5};
    int position = -1;
    scanf("%d",&num);
    for(int i = 0;i<5;i++){
        if(arr[i]==num){
            position = i;
            break;
        }
    }
    if(position!=-1){
        printf("Number found at position",num,position);
    }
    else{
        printf("Number not found",num);
    }
    return 0;
}