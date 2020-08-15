#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int main() {
	
	ll q;
	
	cin >> q;

	vector<ll> results;
	results.resize(q);
	ll i = 0;
	
	while (q > 0) {
		ll m, c, n;
		cin >> m >> c >> n;
	
		int offset = max(m,c) - min(m,c);
		n += offset;
		if (m > c) {
			m -= offset; 
		} else {
			c -= offset;
		}
		ll result = min(m,c);
		ll result2 = min(result, n);
		c -= result2;
		m -= result2;
		n -= result2;
		
		result2 += (c + m) / 3;
		results[i] = result2;
		i++;
		q--;
	}
	cout << endl;
	for (int i = 0; i < results.size(); i++){
		cout << results[i] << endl;
	}
	
	return 0; 
}
