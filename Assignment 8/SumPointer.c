 #include<stdio.h>
 int main(){
    int arr[100];
    int sum = 0;
    int *ptr;

    int n = 10;
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    ptr = arr;
    for(int i = 0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    printf("The Sum is %d",sum);
    return 0;
 }