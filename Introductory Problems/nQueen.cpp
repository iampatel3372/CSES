#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define INT_MAX 1e9+7
using namespace std;

int Count;

bool valid(vector<vector<char> >& chessBoard, int x, int y) {
	// check row
	for(int i = 0; i < 8; i++) if(chessBoard[x][i] == 'Q') return false;

	//check col
	for(int i = 0; i < 8; i++) if(chessBoard[i][y] == 'Q') return false;

	//check diagnoal
	int i = x, j = y;
	while(i >= 0 and j < 8) if(chessBoard[i--][j++] == 'Q') return false;

	i = x, j = y;
	while(i >= 0 and j >= 0) if(chessBoard[i--][j--] == 'Q') return false;

	return true;
}

void backtrack(vector<vector<char> >& chessBoard, int n, int x) {
	if(n == 0) {
		Count++;
		return;
	}
	if(x == 8) return;
	for(int i = 0; i < 8; i++) {
		if(chessBoard[x][i] == '.' and valid(chessBoard, x, i)) {
			chessBoard[x][i] = 'Q';
			backtrack(chessBoard, n-1, x+1);
			chessBoard[x][i] = '.';
		}
	}
}


int main() {
	vector<vector<char> >chessBoard(8, vector<char>(8));
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			cin >> chessBoard[i][j];
		}
	}
	Count = 0;
	backtrack(chessBoard, 8, 0);
	cout << Count;
	return 0;
}