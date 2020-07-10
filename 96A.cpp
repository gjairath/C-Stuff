#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

typedef long long int ll;

int main() {
	
	ll n;
	cin >> n;
	ll a[n];
	
	for(int i = 0; i < n; i++) {
		ll tmp;
		cin >> tmp;
		a[i] = tmp;
	}
	
	int c;
	vector <int> arr;
	bool is_seq = true;
	for (int i = 0; i < n; i++) {
		if (a[i+1] >= a[i]) {
			c = std::min(c,i);
		} else if (a[i+1] < a[i]) {
			is_seq = false;
		}
		if (is_seq == false) {
			int s = i - c + 1;
			arr.push_back(s);
			is_seq = true;
		}
	}
	arr.push_back(c);
	//cout << endl;
	ll max = -1;
	for (int i = 0; i < arr.size(); i++) {
		//cout << arr[i] << endl;
		if (max <= arr[i]) {
			max = arr[i];
		}
	}
	cout << max;
    return 0;
	
}
