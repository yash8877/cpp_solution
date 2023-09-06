#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int x,y,c,a,s,child;
    cout<<"Enter the number of adult ticket than children ticket- ";
    cin>>x;
    cout<<"Enter the total money earn by the suznae in $- ";
    cin>>y;
    c = (y-5*x)/13;
    a = x + c;
    s = 2*c;
    cout<<"The number of children ticket sold- "<<c<<endl;
    cout<<"The number of adult ticket sold- "<<a<<endl;
    cout<<"The number of senior ticket sold- "<<s<<endl;
    return 0;
}