#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

typedef long long int ll;


bool BothAreSpaces(char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); }


int main() {
	string s;
	cin >> s;
	
	for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' ) {
				s[i] = ' ';
				s[i+1] = ' ';
				s[i+2] = ' ';
				//s.erase(i+2);
				
				//cout << " ";
			}
	}
//	cout << s << endl;
	std::string::iterator new_end = std::unique(s.begin(), s.end(), BothAreSpaces);
	
	s.erase(new_end, s.end());   	
	//removeSubstrs(s, o);
	//cout << s;
	if (s[0] == ' ') {
		s.erase(0,1);
	}
	//s.erase(0, 1);
	cout << s;
	
	
	return 0;
}
