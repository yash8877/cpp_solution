// #include <iostream>
// #include<string>
// using namespace std;
// class Occurence{
// 	private:
// 	string str;
// 	char ch;
// 	public:
// 	void search(string str,char ch){
// 		int count=0;
// 		int len = str.length();
// 		for (int i = 0; i <= len; i++)
// 		{
// 			if (ch == str[i])
// 			{
// 				count++;
// 			}
// 		}
// 		cout<<count;
// 	}

// };

// int main()
// {
// 	string str;
// 	char ch;
// 	cout<<"Enter the string- ";
// 	cin>>str;
// 	cout<<"Enter the character to find the occurence of that character in that string- ";
// 	cin>>ch;
// 	Occurence obj;
// 	obj.search(str,ch);
//     return 0;
// }

#include <iostream>
using namespace std;
class University
{
public:
	void max_num(int arr[5])
	{
		for (int i = 1; i <= 5; ++i)
		{
			if (arr[1] < arr[i])
			{
				arr[1] = arr[i];
			}
		}
		cout << "Maximum marks is: " << arr[1];
	}

	void tak_input(int arry[5])
	{
		for (int i = 1; i <= 5; i++)
		{
			cout << "Enter the marks " << i << " = ";
			cin >> arry[i];
		}
	}
};
int main()
{
	int ar1[5], ar2[5], ar3[5];
	University obj1,obj2,obj3;

	cout << "Marks for SCA department:" << endl;
	obj1.tak_input(ar1);
	obj1.max_num(ar1);

	cout << "\nMarks for SSC department:" << endl;
	obj2.tak_input(ar2);
	obj2.max_num(ar2);

	cout << "\nMarks for EEE department:" << endl;
	obj3.tak_input(ar3);
	obj3.max_num(ar3);

	cout << "\nThese are the highest marks for 3 departments:";
	cout << "\nFor SCA: " << ar1[1];
	cout << "\nFor SSC: " << ar2[1];
	cout << "\nFor EEE: " << ar3[1];

	cout << "\nSo the highest among these 3 is:";
	if (ar1[1] > ar2[1] && ar1[1] > ar3[1])
	{
		cout << "\nSCA having the highest marks " << ar1[1] << endl;
	}
	else if (ar2[1] > ar1[1] && ar2[1] > ar3[1])
	{
		cout << "\nSSC having the highest marks " << ar2[1] << endl;
	}
	else
	{
		cout << "\nEEE having the highest marks " << ar3[1] << endl;
	}

	return 0;
}

// #include <iostream>
// using namespace std;

// int maxmarks(string dept_name)
// {

// 	int marks[10], i, max = 0;

// 	cout << "Enter the marks of the students of " << dept_name << ": ";
// 	for (i = 0; i < 10; i++)
// 	{
// 		cin >> marks[i];
// 		if (marks[i] > max)
// 		{
// 			max = marks[i];
// 		}
// 	}

// 	cout << "Highest marks in the class: " << max << endl;

// 	return max;
// };

// int main()
// {

// 	int SCA = maxmarks("SCA");

// 	cout << "Topper of SCA: " << SCA << endl;

// 	int SCS = maxmarks("SCS");

// 	cout << "Topper of SCS: " << SCS << endl;
// 	return 0;
// }
