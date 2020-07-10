#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

typedef long long int ll;

int main() {
	
	int n;
	
	cin >> n;
	vector <int> arr;
	vector <int> arr2;
	
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			arr.push_back(i);
		} else {
			arr2.push_back(i);
		}
	}
	int k;
	cin >> k;
	
	if (k <= arr.size()) {
		cout << arr[k];
	} else {
		int l = arr.size() - k;
		cout << arr2[l];
	}
		
	return 0;
}
