#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    void details(string name, string gen,int age)
    {
        cout<<name<<" "<<age<<" "<<gen;
    }
};
int main()
{
    string name, gen;
    int age;
    cout << "Enter the name of the person- ";
    cin >> name;
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << "Enter the age of the person- ";
    cin >> age;
    cout << "Enter the gender of the person- ";
    cin >> gen;
    transform(gen.begin(), gen.end(), gen.begin(), ::toupper);
    person per;
    per.details(name,gen,age);
    return 0;

}