#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the value of a- ";
    cin>>a;
    cout<<"Enter the value of b -";
    cin>>b;
    a = a+b;
    b= a-b;
    a= a-b;
    cout<<"The values after swapping are : \na = " << a << "\nb = " <<b;
    return 0;
}