#include<iostream>
using namespace std;
int reverse(int num,int rev=0){


    if(num==0)return rev;

    rev = rev*10+num%10;

    return reverse(num/10,rev);
}
int main(){
    int number;
    cin>>number;

    int revvv=reverse(number);

    cout<<revvv<<endl;

    return 0;
}