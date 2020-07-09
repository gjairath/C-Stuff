#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
	
	int n;
	cin >> n;
	
	int players[n];
	for (int i = 0; i < n; i++){
		players[i] = i + 1;
	}
	int j = 0;	
	for (int i = 1; i < n; i++) {
		j += i;
		cout << players[j % n] << " ";
		
	}
	
	
	return 0;
	
}
