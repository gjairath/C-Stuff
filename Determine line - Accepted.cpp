#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
	
	int n;
	cin >> n;
	int l[101] = {0};
	
	for (int i = 0; i < n; i++) {
		int rtmp = 0;
		cin >> rtmp;
		
		for (int j = 0; j < rtmp; j++){ 
			int tmp = 0;
			cin >> tmp;
			l[tmp]++;
		}
	}
	
	for (int i = 0; i <= 101; i++) {
		if (l[i] == n) {
			cout << i << " ";
		}
	}
	
	
	return 0;
	
}
