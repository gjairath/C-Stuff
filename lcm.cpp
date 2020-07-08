#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef unsigned long long int ll;

int main() {
	
	ll number;
	cin >> number;
	
	if (number == 1) { cout << 1; return 0; }
	if (number == 2) { cout << 2; return 0; }
	if (number == 3) { cout << 6; return 0; }
	if (number == 4) { cout << 12; return 0; }
	
	
	if (number % 2 != 0) {
		cout << (number) * (number - 1) * (number - 2);
		return 0;
	}
	
	if (number % 3 == 0) {
		cout << (number - 1) * (number - 2) * (number - 3);
		return 0;
	} else {
		cout << (number) * (number - 1) * (number - 3);
		return 0;
	}
	
}
