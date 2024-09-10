#include<stdio.h>
int main(){
    int number , square , cube;
    printf("Enter the number: ");
    scanf("%d" , &number);
     square = number *number;
     cube = number *number*number;
     printf("The square of %d is : %d\n  " , number , square );
      printf("The cube of %d is: %d\n  " , number , cube);
      return 0;
}