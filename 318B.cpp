#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

typedef long long int ll;



int main() {
	string s;
	cin >> s;
	
	ll h = 0;
	ll c = 0;
	
	for (int i = 4; i < s.length(); i++) {
		
		if (s[i] == 'l') {
			
			if (s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a') {
				c += h;
			}
		}
		
		else if (s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y'){
			h++;
		}
		
	}
	cout << c;
	return 0;
}
