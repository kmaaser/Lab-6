// invest.cpp
#include <iostream>
using namespace std;

int main() {

	double principal, balance;
	float interestrate;
	int years;

	cout << "Enter amount invested each year: " << endl;
	cin >> principal;
	cout << "Enter interest rate: " << endl;
	cin >> interestrate;
	cout << "Enter number of years: " << endl;
	cin >> years

	for(int i = 0; i < years; i++) {
		balance += principal;
		balance += principal*interestrate;
	}
	cout << "After " << years << " years, you have: $" << balance;
	return 0;
}