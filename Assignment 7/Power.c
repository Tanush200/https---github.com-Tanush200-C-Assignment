 #include<stdio.h>

int power(int base , int exp){
    if(exp ==0){
        return 1;
    }
    else {
        return base*power( base , exp-1);
    }
}

int main(){
    int base , exp , result;
    scanf("%d",&base);
     scanf("%d",&exp);
     result = power( base , exp);
    
     printf("%d is ",result);
      return 0;
     
}
 
