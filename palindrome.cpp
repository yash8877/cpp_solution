#include<iostream>
using namespace std;
int main() {
    int num,rev=0,num2,digit;
    cout<<"Enter the number- ";
    cin>>num;
    num2 = num;
    while(num!=0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    cout<<"Rverse of the number is- "<<rev;
    if (num2 == rev)
    {
        cout<<"\nThe number is palindrome.";
    }
    else{
        cout<< "\nNot a Palindrome";
    }
    return 0;
}