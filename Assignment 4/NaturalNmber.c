#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  printf("The natural number is \n");
  int i = 1;
  while(i<=n){
    
    printf("%d",i);
    printf("\n");
    i++;
  }  
  return 0;
}