#include <iostream>

using namespace std;

char board[2200][2200];

void draw(int x, int y, int size) {
	if (size == 1) {
		board[x][y] = '*';
		return;
	}
	int new_size = size / 3;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (i == 1 && j == 1) continue;
			draw(x + new_size * i, y + new_size * j, new_size);
		}
	}
}


int main() {
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			board[i][j] = ' ';
		}
	}

	draw(0, 0, N);

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	return 0;
}