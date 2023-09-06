#include<iostream>
using namespace std;
int main() {
    int n,sum=0,prod=1,digit;
    cout<<"Enter the number- ";
    cin>>n;
    while(n!=0) {
        digit = n%10;
        if (digit % 2== 0)
        {
            sum += digit;
        }
        else{
            prod *= digit;
        }
        n /= 10;
    }
    cout<<"Sum of even digits is " << sum<<endl;
    cout<<"Product of odd digit is "<<prod;
    return 0;
}