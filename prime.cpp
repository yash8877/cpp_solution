#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter the nth term to print the prime number- ";
    cin>> n ;
    for(i=2;i<=n;++i){
        for ( j = 2; j<=i; j++){
            if( i%j == 0){
                break;
            }
        }
        if (j == i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}