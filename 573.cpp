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

int main() {


	int h; // height of wall
	float u; // morning climb
	float d; // slide
	float f; // fatigue as %
	

	while (cin >> h >> u >> d >> f) {
		
		f = (f / 100); // Always fatigue is for the first day.
		
		float climb = (u - d); // Iniitla height is 0
		//cout << f;
		for (int i = 2; ;i++) {
			float newu = u - (u * f);
			
			float newclimb = climb + (newu - d);
			//cout << newclimb << endl;
			if (newclimb < 0) {
				cout << "failure on day " << i << endl;
				break;
			
			} else if (newclimb >= h) {
				cout << "success on day " << i << endl;
				break;
			}
			u = newu;
			climb = newclimb;			
		}
		
	}
	
	return 0; 
}
