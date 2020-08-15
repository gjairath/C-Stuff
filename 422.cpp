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

int main() {

	string l;	
	string f[3000];
	int i = 0;
	while (getline(cin, l)) {
	
		reverse(l.begin(), l.end());
		f[i] = l;
		i++;
		//cout << l << ' ';
	}
	cout << f[i] << endl;

	return 0; 
}
