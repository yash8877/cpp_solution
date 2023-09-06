#include<bits/stdc++.h>
using namespace std;

int main()
{
        int num;
        cin>>num;
        int first=0,second=1;
		int third=1;
		for(int i=1;i<=num;i++){
            cout<<third<<",";
			third=first+second;
			first=second;
			second=third;
		}
        return 0;
        
}
