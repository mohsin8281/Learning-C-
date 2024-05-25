#include<iostream>
using namespace std;

void Day4()
{
	int num;
	cout << "Enter Number";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "Number is even";
	}
	else
	{
		cout << "Not Even";
	}
}

//Day 3
void CheckNumber()
{
	int num;
	cout << "enter the number : ";
	cin >> num;
	if (num <= 10)
	{
		cout << "the number is" << num;
	}
	else
	{
		cout << "the number is wrong" << num;
	}
}

//Day 5 //Loop
void Day5()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*"<<" ";
		}
		cout << "#" << endl;

	}
}


int main() {
	Day5();
	return 0;
}



