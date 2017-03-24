// primes.cpp
#include <iostream>
using namespace std;

int main() {

	int maxvalue, numPrimes;

	cout << "Enter n: ";
	cin >> maxvalue;

	int[] primeArray = int[maxvalue - 2];
	primeArray[0] = 2;
	numPrimes = 1;
	for (int i = 2; i < maxvalue; i++); {
		bool isPrime = true;
		for (int j = 2; j < i; j++); {
			if (i%j == 0) {
				isPrime = false;
			}
			if (isPrime) {
			primeArray[numPrimes - 1] = i;
			numPrimes++;
			}
		}
		
	}
	return 0;
}