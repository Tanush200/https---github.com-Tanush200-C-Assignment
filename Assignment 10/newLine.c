#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp = NULL;
fp=fopen("sample.txt","r");
int count = 1;
char ch;

if(fp ==NULL){
    printf("Exit");
    exit(1);
}
while((ch==fgetc(fp))!=EOF){
    if(ch=='\n'){
        count++;
    }
   
}
 fclose(fp);
 printf("%d",count);
 return 0;
}