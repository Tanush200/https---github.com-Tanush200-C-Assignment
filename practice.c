#include<stdio.h>
int length(char str[]){
        int length = 0;
        while(str[length] !='\0'){
            length++;
        }
        return length;
}
int main(){
    char str[100]="Tanush";
    int len = length(str);
    printf("%d",len);
    return 0;
}





 