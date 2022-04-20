#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;

	cout << "\tEnter first num : ";
	cin >> num1;

	cout << "\tEnter second num : ";
	cin >> num2;

	cout << "\tEnter third num : ";
	cin >> num3;

	cout << "Average number : " << (num1 + num2 + num3) / 3 << "\n";

	return 0;
}