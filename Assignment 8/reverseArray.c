#include<stdio.h>
void reverseArray(int *arr,int size){
    int *start = arr;
    int *end = arr+size-1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;

    }
}
int main(){
    int array[]={1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    reverseArray(array,size);

    printf("The reverse array is ");
    for(int i = 0;i<size;i++){
         
        printf("%d ",array[i]);
    }
    return 0;
}