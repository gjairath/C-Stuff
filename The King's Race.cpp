#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

typedef long long int ll;

// White-Black king problem.

// Step 1: Encapsulate the board.

int main() {
	ll size;
	
	cin >> size;
	
	int someArray[size][size];
	int coinArray[2];
	
	for (int i = 0; i < 2; i++) {
		int temp;
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
	
	int xw = size - 1;
	int yw = 0;
	
	int xc = size - coinArray[0];
	int yc = coinArray[1] - 1;
	
	int xb = size - 1;
	int yb = size - 1;
		
	// the indexes are the rows. The item indicates the thing. 0 = Black king. 1 = Coin. 2 = White king.
	someArray[xw][yw] = 2; // The White King.
	someArray[xc][yc] = 1;
	someArray[xb][yb] = 0; 
	
	int turn = 2; // White Kings turn 
	
	if ( ((abs(yw - 1) == yc) || (abs(xw - 1) == xc)) && turn == 2) { // The white king is within legal bounds of the coin.
		
	}	
	
	return 0;
	
}
