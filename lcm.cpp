#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	
	long long int number;
	cin >> number;
	
	if (number == 1) { cout << 1; return 0; }
	if (number == 2) { cout << 2; return 0; }
	if (number == 3) { cout << 6; return 0; }
	if (number == 4) { cout << 12; return 0; }
	
	
	if (number % 2 != 0) {
		cout << (number) * (number - 1) * (number - 2);
		return 0;
	}
	int max = (number) * (number - 1) * (number - 2);
	if (number > 50) {
		for (int i = (number); i >= number - 50; i++){
			int val = (i) * (i - 1) * (i - 2);
			if ( val > max) {
				max = val;
			}
		}
	}
	cout << max;
	return 0;
}
