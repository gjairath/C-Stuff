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
	
	
	int n;
	int seq;
	int deq = seq;
	cin >> n >> seq;
	int d = 0;
	int i = 0;
	for (; n > 0; n /= 10) {
		int a = n % 10;
		deq = seq;
		for (; deq > 0; deq /= 10) {
			int b = deq % 10;
			if ( a < b) {a = b;}
		}
		d += pow(10,i) * a;
		i++;
	}
	
	cout << d;
	return 0;
}
