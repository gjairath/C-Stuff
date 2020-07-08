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
	
	cin >> size;
	
	int someArray[size][size];
	ll coinArray[2];
	
	for (int i = 0; i < 2; i++) {
		ll temp;
		cin >> temp; 
		coinArray[i] = temp;
	}
	
	for (int i = 0; i < size ; i ++) {
		for (int j = 0 ; j < size; j++) {
			someArray[i][j] = -1;
			//cout << someArray[i][j];
		}
	}
	
	// Both the kings should first check if the coin exists within their legal actions.
	// Right, left, up or down.
	// If not, they should move diagnol. 
	// I dont think I can do BFS on a potentially NP hard chessboard in 2 seconds.
	
	ll xw = size - 1;
	ll yw = 0;
	
	ll xc = size - coinArray[0];
	ll yc = coinArray[1] - 1;
	
	ll xb = size - 2;
	ll yb = size - 1;
		
	// the indexes are the rows. The item indicates the thing. 0 = Black king. 1 = Coin. 2 = White king.
	someArray[xw][yw] = 2; // The White King.
	someArray[xc][yc] = 1;
	someArray[xb][yb] = 0; 
	
	if (xw == xc && yw == yc) {
		cout << "White";
		return 0;
	}
	if (xb == xc && yb == yc) {
		cout << "Black";
		return 0;
	}
	
	ll turn = 2; // White Kings turn 
	bool isComplete = true;
	
	while (isComplete) {		
		if ( ((abs(yw - 1) == yc) || (abs(xw - 1) == xc)) && turn == 2) { // The white king is within legal bounds of the coin.
			cout << "White";
			return 0;
		} else if ( ((abs(yb - 1) == yc) || (abs(xb - 1) == xc)) && turn == 1) {
			cout << "Black";
			return 0;
		} else {
			if (turn == 2) {
				yw++;
				xw++;
				someArray[xw][yw] = 2; // THE KINGS CAN HOLD THE SAME SPOT, BLACKENING THE INITIAL IS FUTILE.
				turn = 1;
			} else {
				xb++;
				yb++;
				someArray[xb][yb] = 1;
				turn = 2;
			}
		}
	}
	return 0;
	
}
