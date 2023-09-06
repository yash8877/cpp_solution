#include<iostream>
using namespace std;
int main() {
    int i,j,num;
    cout<<"Enter the number of rows- ";
    cin>>num;
    i = 1;
    while (i <= num)
    {
        j = 1;
        while (j <= i)
        {
            cout<<j+i;
            ++j;
        }
        cout<<endl;
        ++i;
        
    }
    return 0;
    
}