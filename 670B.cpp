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
	int k;
	
	cin >> n >> k;
	vector<int> f;
	f.resize(n);
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> f[i];
	}
	int l = 0;
	for (int i = 1; i <= n; i++) {
		//l += i;
		if (i + l >= k) {
			cout << endl << f[k - l -1];
			return 0;
		}
		l += i;
	}
}
