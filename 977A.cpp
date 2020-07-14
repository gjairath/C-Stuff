#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

typedef long long int ll;




int main() {
	
	// FIX THIS
	
	int n, k;
	cin >> n >> k;
	
	while (k > 0){
		
		if (n % 10 != 0) {
			n--;
			k--;
		} else if (n % 10 == 0) {
			n = n / 10;
			k--;
		}
		
	}
	cout << n;
	return 0;
}
