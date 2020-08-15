#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      
#include <cstring>

using namespace std;

typedef long long int ll;

int main() {


	char l[1024];
	bool ye = true;
	while (gets(l)) {
		
		ll i2 = strlen(l);
		
		for (int i = 0; i < i2; i++) {
			if (l[i] == '"') {
				if (ye) cout << "``";
				else cout << "''";
				ye = !ye;
			} else {
				cout << l[i];
			}
		}
		
		cout << endl;
	}

	return 0; 
}
