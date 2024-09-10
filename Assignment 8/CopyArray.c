#include<stdio.h>
void copyArray(int *dest,int *source,int size){
    for(int i = 0;i<size;i++){
        *(dest + i) = *(source+i);
    }
}
int main(){
    int sourceArray[] = {1,2,3,4,5};
    int size = sizeof(sourceArray)/sizeof(sourceArray[0]);
    int destArray[size];

    copyArray(destArray,sourceArray, size);
    
    printf("Printed Array is : ");
     for(int i = 0;i<size;i++){
        printf("%d",destArray[i]);
     }
     return 0;
}