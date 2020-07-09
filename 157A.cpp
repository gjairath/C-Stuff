#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	
	int width;
	cin >> width;
	int a[width][width];
	int row_sum[width];
	int col_sum[width];
	
	int row_sums = 0;
	int col_sums = 0;
	
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			row_sums += a[i][j]; 
			col_sums += a[j][i];
		}
		row_sum[i] = row_sums;
		row_sums = 0;
		col_sum[i] = col_sums;
		col_sums = 0;
	}
	int counter = 0;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			if (col_sum[i] > row_sum[j]) {
				counter++;
			}
		}
	}
	cout << counter;
    return 0;
	
}
