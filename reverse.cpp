#include<iostream>
using namespace std;
int main() {
    int num,rev=0,digit;
    cout<<"Enter the number- ";
    cin>>num;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10)+ digit;
        num = num / 10;
    }
    cout<<"This is your reverse number- "<<rev;
    return 0;
    
}