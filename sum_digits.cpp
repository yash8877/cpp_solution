#include<iostream>
using namespace std;
int main() {
    int num,sum,digit;
    sum = 0;
    cout<<"Enter the number- ";
    cin>>num;
    while (num!=0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    cout<<"The sum of the digits is- "<<sum;

}