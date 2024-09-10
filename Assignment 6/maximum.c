#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int maximum = arr[0];

    for(int i = 0;i<5;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    printf("%d",maximum);
    
    return 0;
}