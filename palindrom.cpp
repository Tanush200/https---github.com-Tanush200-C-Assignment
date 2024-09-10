#include<iostream>
using namespace std;
int reverse(int num,int rev=0){

    if(num==0)return rev;
    rev = rev*10+num%10;
    return reverse(num/10,rev);
}
bool palindrom(int num){
    return num==reverse(num);
}
int main(){
    int number;
    cin>>number;
    cout<<palindrom(number)<<endl;
    return 0;
}