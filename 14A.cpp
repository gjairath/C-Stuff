#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;
	
int main() {
	
	int rows, cols;
	cin >> rows >> cols;
	char a[101][101];
	
	int x = 1e8, xm = 0, y = 1e8, ym = 0;
	
	for (int i = 1; i <= rows ; i++) {
		for (int j = 1; j <= cols; j++) {
			cin >> a[i][j];
			
			if (a[i][j] == '*') {
				// we want to store the 4 parameters
				x = min(x,i); // For the first example this should be 2.
				y = min(y,j); // for the first example, this should be 3
				
				xm = max(xm, i); // this should be 6
				ym = max(ym, j); // this should be 5
				
			}
		}
	}
	
	for (int i = x; i <= xm; i++) {
		for (int j = y; j <= ym; j++) {
			cout << a[i][j];
		}
		cout << '\n';
	}
    return 0;
	
}
