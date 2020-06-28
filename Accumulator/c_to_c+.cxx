/*
 * c_to_c+.cxx
 * 
 * Copyright 2020 Garvit <Garvit@DESKTOP-QUE5L52>
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
#include <vector>
using namespace std;


const int N = 40;

inline void sum(int &p, const vector<int> &data) {

    p = 0;

    for(long long unsigned int i = 0; i < data.size(); i++) { // I don't really know why this is happening but I'll roll with it.
	p += data[i];
    }
}

int main() {
    int accum = 0;
    vector<int> data;
    

    for(int i = 0; i < N; ++i) {
	data.push_back(i);
    } 
    
    sum(accum, data);
    cout << "Sum is " << accum << "\n";
    
    return 0;
}
