#include<iostream>
using namespace std;
class dayofweek{
    public:
    int date(int d){
    if (d == 0)
    {
        cout<<"Weekend";
    }
    else if(d == 1){
        cout<<"Monday";
    }
    else if(d == 2){
        cout<<"Tuesday";
    }
    else if(d == 3){
        cout<<"Wednesday";
    }
    else if(d == 4){
        cout<<"Thursday";
    }
    else if(d == 5){
        cout<<"Friday";
    }
    else if(d == 6){
        cout<<"Saturday";
    }
    else{
        cout<<"Enter the valid number- ";
    }
    }
};
int main(){
    int d;
    cout<<"Enter the number to get the name of the days(0-7)- ";
    cin>>d;
    dayofweek day;
    day.date(d);
}