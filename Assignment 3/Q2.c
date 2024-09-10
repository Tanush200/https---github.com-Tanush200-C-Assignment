#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);


    if(age<18){
        printf("The man is not adult");
    }
    else{
        printf("The man is adult");
    }
    return 0;
}