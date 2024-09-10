 #include<stdio.h>
  typedef struct  {
    float real;
    float imag;
 } complex;

 int main(){
    complex num1 , num2 , sum, diff;
     printf("Enter the first real part");
     scanf("%f%f",&num1.real,&num1.imag);
      printf("Enter the second real part");
     scanf("%f%f",&num2.real,&num2.imag);

     sum.real = num1.real+num2.real;
     sum.imag = num1.imag+num2.imag;

     diff.real = num1.real-num2.real;
     diff.imag = num1.imag-num2.imag;

     printf("Sum = %.2f+%.2fi  \n",sum.real,sum.imag);
      printf("difference = %.2f+(%.2fi) \n",diff.real,diff.imag);

      return 0;
 }
