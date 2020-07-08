#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
	
	int rows, cols;
	cin >> rows >> cols;
	
	string input_string;
	cin >> input_string;
	
	int max_squares = 0;
	
	for (int i = 0; i < rows; i++) {
		int counter = 0;
			for (int j = 0; j < cols; j++) {
				if (input_string[i] == '*') {
					//cout << counter;
					counter++;
				}
			}
			if (max_squares < counter) {
				max_squares = counter; // 2nd line may have more squares than the first.
			}
	}
	
	cout << max_squares;
	
	
    return 0;
	
}
