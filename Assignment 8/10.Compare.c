#include<stdio.h>
int compare( char *str1,char *str2){
    while(*str1 && *str2 ){
         
        if(*str1 !=*str2){
            return (*str1-*str2);
        }
        str1++;
        str2++;
    }   
    return (*str1-*str2);

}
int main(){
    char str1[100] = "Hello";
     char str2[100] = "Hello";

     int result = compare(str1,str2);

     if(result == 0){
        printf("The strings are equal");
     }
     else if(result>0){
        printf("The first string is greater than str2");
     }
     else{
        printf("The str1 is less than str2");
     }
     return 0;
}