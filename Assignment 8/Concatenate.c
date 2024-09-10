#include<stdio.h>
void concatenate(char *str1,char *str2){
    while(*str1 !='\0'){
        str1++;
    }
    while(*str2 !='\0'){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main(){
    char str1[100]="Hello ";
    char str2[100]="World";

    concatenate(str1,str2);

    printf("%s",str1);

    return 0;
}