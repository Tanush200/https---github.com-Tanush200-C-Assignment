#include<stdio.h>
int main(){
    float centigrade;
    float ferenhite;
    printf("Enter centigrade: ");
    scanf("%f",&centigrade);

   ferenhite = (centigrade *9 / 5) + 32;

    printf("The Ferenhite value is: %f\n",ferenhite);
    return 0;
}