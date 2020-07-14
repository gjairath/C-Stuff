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
	string s;
	cin >> n >> s;
	int c = 1;
	int c1 = -1;
	string max;
	string max2;
	for (int i = 0; i < s.length() - 1; i++) {
		max2 = s[i];
		max2 += s[i+1];
		//cout << max2 << endl;
		for (int j = 1; j < s.length(); j++) {
			if (s[i] == s[j] && s[i+1] == s[j+1] || s[i] == s[j+1] && s[i+1] == s[j+2]){
				cout << c;
				c++;
				} 
		}
			if (c1 < c){ 
					c1 = c;
					max = s[i];
					max += s[i+1];
					c = 0;
			}
			
		}

	cout << max;
	
}
