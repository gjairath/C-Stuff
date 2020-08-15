#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      
#include <cstring>
#include<bits/stdc++.h> 

using namespace std;

typedef long long int ll;

inline char f(char c) {
	
	if (c == 'B' || c == 'P' || c == 'F' || c == 'V') {
		return '1';
	} 
	if (c == 'C' || c == 'S' || c == 'K' || c == 'G' || c == 'J' || c == 'Q' || c == 'X' || c == 'Z'){
		return '2';
	}
	if (c== 'D' || c == 'T') {
		return '3';
	}
	if (c == 'L') {
		return '4';
	}
	if (c == 'M' || c == 'N') {
		return '5';
	}
	if (c == 'R'){
		return '6';
	}
	return '0';
}

int main() {

	vector<string> vec;
	string name;
	
	
	while (getline(cin, name)) {
		cin >> name;
		string code = "0000";
		code[0] = name[0];
		int ind = 1;
		for (int i = 1; i < name.length(); i++) {
			if (f(name[i]) != '0' && f(name[i]) != f(name[i-1])) {
				code[ind] = f(name[i]); // first non occurance		
				ind++;		
			}
		}
		//cout << ind << endl;
		while (ind <= 4) {
			code[ind] = '0';
			ind++;
		}
		vec.push_back(code);
	}
	
	for (int i = 0; i < vec.size(); i++){
		cout << vec[i] << endl;
	}
	
	return 0; 
}
