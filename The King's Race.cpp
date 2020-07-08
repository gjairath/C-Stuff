#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

typedef long long int ll;

// White-Black king problem.

// I wish I fucking remembered the time limit.

int main() {
	
	ll size;
    ll a,b;
    cin >> size;
    
    cin >> a >> b;
    
	if(a + b > size + 1) cout << "Black" << endl;
	else cout << "White" << endl;
    return 0;
	
}
