#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;

static bool is_even(ll s) {
	if (s % 2 == 0){
		return true;
	}
	return false;
}

int main() {

	ll n;
	cin >> n;
	ll top[n];
	ll bot[n];
	
	
	for (ll i = 0; i < n; i++){
			ll top1;
			ll bot1;
			cin >> top1;
			cin >> bot1;
			top[i] = top1;
			bot[i] = bot1;
		
	}
	
	ll us = accumulate(top, top + n, us);
	ll bs = accumulate(bot, bot + n, bs);
	
	if (is_even(us) && is_even(bs)){
		cout << 0;
		return 0;
	}
	
	if (is_even(us) && !is_even(bs) || is_even(bs) && !is_even(us)) {
		cout << -1;
		return 0;
	}
	
	ll c = 0;
	for (ll i = 0; i < n; i++) {
		if (is_even(top[i]) && !is_even(bot[i]) || is_even(bot[i]) && !is_even(top[i])){
			cout << 1;
			return 0;
		}
	}
	
	cout << -1;
	return 0; 
}
