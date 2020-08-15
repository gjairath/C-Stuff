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
	
	ll d = n;
	ll multiplier = 1;
	
	while (d > 0) {
		
		if (d < 10 && d == 9) {
			break;
		}
		
		ll last = d % 10;
		
		ll offset = last - (9 - last);
		
		ll n1 = n - (multiplier * offset);
	//	cout << "N:" << n1 << endl;
		if (n1 < n) {
			n = n1;
		} 
		d /= 10;
		multiplier *= 10;
		
	}
	cout << n;
	
	return 0; 
}
