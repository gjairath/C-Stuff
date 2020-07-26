#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      
#include <limits>

using namespace std;

typedef long long int ll;


int main() {
	
	string s;
	cin >> s;
	
	int res = 0;
	bool ok;
	int cur;
	for (int i = 0; i < 10e7; i++) {
		cur = i;
		ok = true;
		for (int j = 1; j <= s.length(); j++) {
			res++;
			if (s[j] == '+') {cur++;}
			else if (s[j] == '-') {cur--;}
			
			if (cur < 0) {
				ok = false;
				break;
			}
			}
		if (ok == true) {
		break;
		} 
		}

	cout << res;	
	return 0;
}
