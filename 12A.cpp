#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
	
	// 5-7-5 Sylabels = Vowels
	// Sample string
 
 	char mat[3][4];
 	string line;
 	scanf("%s %s %s", mat[0], mat[1], mat[2]);
 	
 	//   XX.
	//   ...
	//   .XX
	
	if (mat[0][0] == mat[2][2] && mat[0][1] == mat[2][1] && mat[1][0] == mat[1][2] && mat[2][0] == mat[0][2]) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
    return 0;
	
}
