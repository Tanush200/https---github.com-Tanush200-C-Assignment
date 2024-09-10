#include<stdio.h>
int main(){
    int n;
    int *ptr;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(int i= 0;i<n;i++){
        printf("%d",*(ptr+i));
        
    }
    printf("\n");
     
    return 0 ;
}