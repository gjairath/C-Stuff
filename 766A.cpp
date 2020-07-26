#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int main() {
	
	string a;
	string b;
	
	// find largest uncommon sequence.
	// abcd
	// defgh
	// answer: efgh for 4 NOT abc for 3.
	
	cin >> a >> b;
	
	if (!a.compare(b)) {
		cout << -1;
	}else {
		cout << max(a.length(), b.length());
	}	
	return 0; 
}
