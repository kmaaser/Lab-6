// change.cpp
#include <iostream>
using namespace std;

int main() {

	int amount, penny = 0, nickle = 0, dime = 0, quarter = 0;

	cout << "Enter amount (0 - 99): ";
	cin >> amount;

	while (amount > 0) {
		while (amount > 25) {
			amount -= 25;
			quarter++;
		}
		while (amount > 10) {
			amount -= 10;
			dime++;
		}
		while (amount > 5) {
			amount -= 5;
			nickle++;
		}
		while (amount > 1) {
			amount -= 1;
			penny++;
		}
	}

	return 0;
}