#include<stdio.h>
int main(){
    int units;
    float bill;
     printf("Enter Unit: ");
     scanf("%d",&units);

     if(units<=200){
        bill = units*0.50;
     }
     else if(units<=400){
        bill = 200*0.50 + (units - 200)*0.65;
     }
     else if(units<=600){
        bill = 200*0.50 + 200*0.65 +(units-400)*0.80;
     }
     else{
        bill = 200*0.50 + 200*0.65 +200*0.80 +(units-600)*0.90;
     }

     printf("The bill is : %.2f\n",bill);
     return 0;
}