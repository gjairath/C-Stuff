#include <iostream>
#include <cstdio>
#include <bits/stdc++.h> 
#include <tr1/unordered_map>
#include <iterator>
using namespace std::tr1;

using namespace std;

int main() {
    // Complete the code.
    unordered_map<char, int> M;
    string str = "wjmzbmr";
    //cin >> str; //wjmzbmr has 6 distinct, it is a girl. Great.
    
    for (int i = 0; str[i]; ++i) {
		if (M.find(str[i]) == M.end()) {
			M.insert(make_pair(str[i], 1));
		} else {
			M[str[i]]++;
		}
	}
	int counter = 0;
	
	unordered_map<char,int>::iterator it = M.begin();
	
	while (it != M.end()) {
		if (it -> second == 1) {
			counter++;
		}
	}
	
	if (counter % 2 != 0) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER";
	}
	return 0;
}

