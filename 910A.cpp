#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

typedef long long ll;


int main() {
	
	ll n, d;
	cin >> n >> d;
	ll a[n];
	
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int counter = 0;
	
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			if (abs(a[i] - a[j]) <= d) {
				counter++;
			} 
		}
	}
	cout << counter * 2;
}
