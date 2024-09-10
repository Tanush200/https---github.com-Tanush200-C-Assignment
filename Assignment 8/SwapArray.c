#include<stdio.h>
void swapArray(int *array1,int *array2,int size){
    for(int i = 0;i<size;i++){
        int temp = *(array1+i);
    *(array1+i) =*(array2+i);
    *(array2+i) = temp;
    }
   
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};
    int size = sizeof(arr1)/sizeof(arr2[0]);

    swapArray(arr1,arr2,size);

    printf("after swapping the value : ");
    printf("\nArray 1 :");
        for(int i = 0;i<size;i++){
            printf("%d",&arr1[i]);
    }
    printf("\nArray 2 :");
    for(int i = 0;i<size;i++){
            printf("%d",&arr2[i]);
    }
    return 0;
}