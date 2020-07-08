#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
using namespace std;

 
bool traverse_string(string someString, int desiredValue) {
	int counter = 0;
	for (int i = 0; i < someString.length(); i++) {
		if (someString[i] == 'a' || someString [i] == 'i' || someString [i] == 'e' || someString [i] == 'o' || someString [i] ==  'u') {
		//	cout << "some string's i value" << someString[i] << endl; 
			counter++;
		}
	}
	//cout << "counter:" << counter << '\n';
	if (counter != desiredValue) {
		return false;
	}
	return true;
}

int main() {
	
	// 5-7-5 Sylabels = Vowels
	// Sample string
	

	
	string response;
	getline(cin, response);
	
	bool istrue1 = traverse_string(response, 5);
	
	string response2;
	getline(cin, response2);
	
	bool istrue2 = traverse_string(response2, 7);
	
	string response3;
	getline(cin, response3);
	
	bool istrue3 = traverse_string(response3, 5);
	
//	cout << istrue1 << " " << istrue2 << " " << istrue3;
	if (istrue1 && istrue2 && istrue3) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
    return 0;
	
}
