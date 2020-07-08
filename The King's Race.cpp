#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int ll;

// White-Black king problem.

// Step 1: Encapsulate the board.

void createBoard(int* boardArray){
	
	// the indexes are the rows. The item indicates the thing. 0 = Black king. 1 = Coin. 2 = White king.
	boardArray[0] = 0; // the king is at 0,0 or as per the board 1,1
	boardArray[]
}

int main() {
	ll size;
	
	cin >> size;
	
	int someArray[size];
	int coinArray[2];
	
	for (int i = 0; i < 2; i++) {
		int temp;
		cin >> temp; 
		coinArray[i] = temp;
	}
	
	createBoard(someArray, coinArray);
	
	return 0;
	
}
