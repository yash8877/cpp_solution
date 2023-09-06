#include<iostream>
using namespace std;
int main() {
    int n,fact;
    cout<<"Enter a number: ";
    cin>>n;
    fact = 1;
    if (n == 0)
    {
        cout<<"The factorial of 0 is- 1"<<endl;
    }
    else if(n<0){
        cout<<"Sorry! Factorial does not exist for negative numbers."<<endl;
    }
    else{
        for(int i=1;i<=n;++i){
            fact *= i;
            }
            cout<<"The factorial of " << n << " is - " << fact << endl;
    }
    

}