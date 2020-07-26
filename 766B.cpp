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
	cin >> n;
	vector <int> t;
	t.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	sort(t.begin(), t.begin() + n);
	for (int j = 1; j < t.size() - 1; j++) {
	//	cout << sum << endl;
		if (t[j-1] + t[j] > t[j+1]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0; 
}
