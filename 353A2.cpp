#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;



int main() {

	ll n;
	cin >> n;
	ll s1, s2;
	int c = 0;
	for (int i = 0; i < n; i++) {
		ll tmp1;
		ll tmp2;
		cin >> tmp1 >> tmp2;
		s1 += tmp1;
		s2 += tmp2;
		if ((tmp1 % 2) != (tmp2 % 2)) {
			c++;
		}
	}
	if (s1 % 2 == 0 && s2 % 2 == 0) {
		cout << 0;
		//return 0;
	}
	
	else if (c % 2 == 0 && c > 0) {
		cout << 1;
		//return 0;
	} else {
		
		cout << -1;
	}
	return 0; 
}
