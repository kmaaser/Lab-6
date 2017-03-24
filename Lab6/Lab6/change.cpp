// change.cpp
#include <iostream>
using namespace std;

int main() {

	int amount, pennies = 0, nickles = 0, dimes = 0, quarters = 0;

	cout << "Enter amount (0 - 99): ";
	cin >> amount;

	while (amount >= 25) {
		amount -= 25;
		quarters++;
	}
	while (amount >= 10) {
		amount -= 10;
		dimes++;
	}
	while (amount >= 5) {
		amount -= 5;
		nickles++;
	}
	while (amount >= 1) {
		amount -= 1;
		pennies++;
	}
	if (quarters > 0) {
		cout << "Quarters: " << quarters << endl;
	}
	if (dimes > 0) {
		cout << "Dimes: " << dimes << endl;
	}
	if (nickles > 0) {
		cout << "Nickles: " << nickles << endl;
	}
	if (pennies > 0) {
		cout << "Pennies: " << pennies << endl;
	}
	return 0;
}