#include <iostream>
using namespace std;

int main()
{
	double uah;


	cout << "Enter UAH : ";
	cin >> uah;

	double usd = uah / 29;
	double eur = uah / 32;

	cout << "\n\tUAH to USD : " << usd << "\n\n";
	cout << "\tUAH to EUR : " << eur << "\n";

	return 0;
}