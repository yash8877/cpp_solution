#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x,y,power=1,i=1;
    cout<<"Enter the number- ";
    cin>>x;
    cout<<"Enter the power- ";
    cin>>y;
    // power = pow(x,y);
    while (i<=y)
    {
        power *= x;
        i++;
    }
    
    cout << x   << "is to power" << y << "is- " << power;
    return 0;
}