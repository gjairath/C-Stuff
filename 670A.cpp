#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int main() {
	
	int n;
	cin >> n; // no days
	int m = n;
	if (n <= 2) {
		cout << 0 << ' ' << n;
		return 0;
	}
	int c = 0;
	while (n >= 0) {
		n = n - 5;
		if (n >= 0) {
			c ++;
			n = n - 5;
		}
	}
	if (m <= 5) {
		cout << 0 << ' ' << c;
		return 0;
	}
	cout << c << ' ' << c;
	return 0;
}
