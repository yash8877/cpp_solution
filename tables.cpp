#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number to print the table- ";
    cin>>num;
    cout<<"This is your table of" <<num<<":";
    for(int i=1 ;i<=10;++i){
        cout<<"\n"<<num<< "X" <<i << "=" <<num*i;
    }
}