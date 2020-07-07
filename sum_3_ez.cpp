
#include <bits/stdc++.h>
  
#define modulo 1073741824;
long long someArray[1000001];

long long d(long long n) {
	if (someArray[n] != 0) {
		return someArray[n];
	}
	int counter = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i != n) {
				counter++;
			}
			counter++;
		}
	}
	someArray[n] = counter;
	return counter;
}
int main() 
{ 
	long long a, b, c;
	std::cin >> a >> b >> c; 
	long long sum = 0;
	
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++){
				sum += d(i*j*k);
			}
		}
	}
	
	std::cout << sum % modulo;
	
    return 0; 
} 
