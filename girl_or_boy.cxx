#include <iostream>
#include <cstdio>
#include <bits/stdc++.h> 
	
using namespace std;

int main() {
    // Complete the code.
    unordered_map<char, int> M;
    string input_string;
    cin >> input_string; //wjmzbmr has 6 distinct, it is a girl. Great.
    
    for (int i = 0; str[i]; ++i) {
		if (M.find(str[i]) == M.end()) {
			M.insert(make_pair(str[i], 1));
		} else {
			M[str[i]]++;
		}
	}
	int counter = 0;
	
	auto it = M.begin();
	
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
}
