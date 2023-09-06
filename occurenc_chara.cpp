#include <iostream>
#include <string>
using namespace std;
class Occurence
{
private:
    string str;
    char ch;

public:
    void search(string str, char ch)
    {
        int count = 0;
        int len = str.length();
        for (int i = 0; i <= len; i++)
        {
            if (ch == str[i])
            {
                count++;
            }
        }
        cout << count;
    }
};

int main()
{
    string str;
    char ch;
    cout << "Enter the string- ";
    cin >> str;
    cout << "Enter the character to find the occurence of that character in that string- ";
    cin >> ch;
    Occurence obj;
    obj.search(str, ch);
    return 0;
}