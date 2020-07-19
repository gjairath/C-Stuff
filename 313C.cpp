#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int main() {
	
	int n; // 4 raised to n
	cin >> n;
	if (n == 0 || n == 1) {
		ll tmp;
		cin >> tmp;
		cout << tmp;
		return 0;
	}
	ll sum = 0;
	// if n = 4, 4 1x1 matrices or 4 2^1-1 x 2^1-1 matrices.
		// Each of those can be split up into 4 1x1 matrices. and you sum the max until you cannot split it any further
	vector<int> f;
	f.resize(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &f[i]);
	}

	sort(f.rbegin(), f.rend());
	for (int i = 1; i <= n; i *= 4) {
		sum += accumulate(f.begin(), f.begin() + i, 0LL);
	}
	cout << sum;
	return 0;
}
