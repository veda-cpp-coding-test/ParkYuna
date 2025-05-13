#include <iostream>
#include <vector>
using namespace std;


int board[128][128];
int white = 0;
int blue = 0;
bool isSame(int x, int y, int size) {
	int color = board[x][y];
	for (int i = x;i < x + size;i++) {
		for (int j = y;j < y + size;j++) {
			if (board[i][j] != color) return false;
		}
	}
	return true;
}


void dividing(int x, int y, int size) {
	if (isSame(x,y,size) ){
		if (board[x][y] == 0) white++;
		else blue++;
		return;
	}
	int half = size / 2;
	dividing(x ,y, half);
	dividing(x+half, y, half);
	dividing(x, y+half, half);
	dividing(x+half, y+half, half);

}


int main() {
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> board[i][j];
		}
	}
	
	dividing(0, 0, N);
	cout << white << '\n' << blue << endl;

	return 0;
}