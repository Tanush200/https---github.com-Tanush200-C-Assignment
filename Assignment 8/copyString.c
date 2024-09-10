#include<stdio.h>
void copyString(char *dest,char *source){
    while(*source !='\0'){

    *dest = *source;
    dest++;
    source++;
    }
    *dest = '\0';

}
int main(){
     char sourecStr[] = "Tanush Saha";
     char destStr[100];

     copyString(destStr,sourecStr);

     printf("%s",destStr);
     return 0;
}

