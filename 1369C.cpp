#include <cstdio>
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>       /* sqrt */
#include <numeric>      

using namespace std;

typedef long long int ll;


int main() {

	int tcases;
	int num_nums;
	int friends;
	
	// int number_distrubution 1 3 1 for 1 3 for other.
	cin >> tcases;
	for (int i = 0; i < tcases; i++) {
		int sum = 0;
		cin >> num_nums;
		cin >> friends;
		vector<int> num_array;
		num_array.resize(num_nums);
		for (int j = 0; j < num_nums; j++){
			int tmp;
			cin >> tmp;
			num_array[j] = tmp;
		}
		sort(num_array.rbegin(), num_array.rend());
		for (int k = 0; k < friends; k++) {
			
			int tmp1;
			cin >> tmp1; // first friends numbers
			int arr[tmp1];
			for (int l = 0; l < tmp1; l++) {
				arr[l] = num_array[l];
			}
			sum += *max_element(arr, arr + tmp1) + *min_element(arr, arr + tmp1);
			
		}
		cout << endl << sum << endl;

	}
//	cout << sum << endl;
	
	return 0; 
}
