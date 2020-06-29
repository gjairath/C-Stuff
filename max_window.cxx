/*
 * max_window.cxx
 * 
 * Copyright 2020 garvi <garvi@DESKTOP-0FVDU5O>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    // t is the queries in total
    // n is like the subqueries
    // k is the subsets of the subqueries

    // 5 2
    // ^ ^
    // n k

    // 3 4 6 3 4


    deque<int> myDeque;

    // First Window
    int i = 0;
    for (; i < k; i++) {

        while(!myDeque.empty() && arr[i] > arr[myDeque.back()]) {
            myDeque.pop_back();
        }
        myDeque.push_back(i);
    }
    // Should have 4 or index '1' now.
    
    for (; i < n ; i++) {
        cout << arr[myDeque.front()] << ' ';
        
        while(!myDeque.empty() && myDeque.front() <= i - k) {
            myDeque.pop_front(); // our windows gone fam
        }

        while(!myDeque.empty() && arr[i] > arr[myDeque.back()]) {
            myDeque.pop_back();
        }
        myDeque.push_back(i);

    }
    cout << arr[myDeque.front()];
}   

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
        cout << endl;
    	t--;
  	}
  	return 0;
}
