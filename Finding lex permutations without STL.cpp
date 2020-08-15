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


int next_p(string s) {
	
	int length = s.length();
	int index = -1;
	
	for (int i = length - 2; i >= 0; i--) {
		if (s[i+1] > s[i]) {
			index = i + 1;
		}
	}
	if (s[0] < s[1] && index == 0) return index - 1;
	else return index;
	
	return index;
	
}

void swap(char * a, char * b){
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

int binary(string s, int l, int r, int key) {
	// From the array, find the smallest alphabet to maintain least lexicological order.
	
	// abdec  
	// abca --> acab 
	// l = 2
	// r = 3
	// key = b
	int index = -1;
	while (l <= r) {
		int mid = (l + r) / 2; 
		
		if (s[mid] <= key) {
			r = mid - 1; // 2
		} else{
			l = mid + 1; // 3
			if (index == -1 || s[index] >= mid) {
				index = mid; // a
			}
		}
	}
	return index;
}

void reverse(string& s, int l, int r) {
	while (l < r) {
		swap(&s[l++], &s[r--]);
	}
}

int main() {

	string s = "abca";
	
	int next = next_p(s);
	
	cout << next;
	int l = next + 1; // 2
	int r = s.length() - 1; // 2
	int desired_index = binary(s, l, r, s[next]); // s, 1, 2, b ==> 2
	cout << desired_index;
	swap(&s[next], &s[desired_index]);
	reverse(s, next + 1, r);
	cout << endl << s;
	return 0; 
}
