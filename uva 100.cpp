#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int collatz(int k) {
	int c = 0;
	if (k == 1) {
		k = 4;
		c++;
	}
	//int c = 0;
	while (k != 1) {
		if (k % 2 == 0) {
			k /= 2;
			c++;
		} else {
			k = 3*k + 1;
			c++;
		}
	}
	return c + 1;
}

int main() {


	ll i, j;
	while (cin >> i >> j) {

//	cin >> i >> j;
	
	ll c = 0;
	
	for (ll k = i; k <= j; k++) {
		int c1 = collatz(k);
		if (c < c1){
			c = c1;
		}
	}

	cout << endl << i << ' ' << j << ' ' << c << endl;

	}
	return 0; 
}
