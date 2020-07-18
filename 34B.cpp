#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

typedef long long int ll;


int main() {
	
	int n;
	int m;
	cin >> n >> m;
	int counter = 0;
	vector<int> V;
	int k = n;
	while (k > 0) {
		int temp;
		cin >> temp;
		V.push_back(temp);
		k--;
	}
	sort(V.begin(), V.end());
	for (int i = 0; i < n; i++) {
		if (V[i] < 0) {	
			counter += V[i] * -1;
			m--;
		} else {
			m--;
		}
		if (m == 0) {
			break;
		}
	}
	cout << counter;
	return 0;
}
