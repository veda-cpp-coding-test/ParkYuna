#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
#include <cstring>

using namespace std;
int board[1002][1002];
int dist[1002][1002][2];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int N, M;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//입력받기
	cin >> N >> M;
	memset(dist, -1, sizeof(dist));
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			char c;
			cin >> c;
			board[i][j] = c - '0';
		}
	}

	//bfs
	queue<tuple<int, int, int>> myqueue;
	myqueue.push({ 0,0,0 });
	dist[0][0][0] = 1;
	while (!myqueue.empty()) {
		auto current = myqueue.front();
		myqueue.pop();
		int x = get<0>(current);
		int y = get<1>(current);
		int broken = get<2>(current);

		for (int dir = 0;dir < 4;dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			//벽뚫기
			if (board[nx][ny] == 1 && broken == 0) {
				if (dist[nx][ny][1] == -1) {
					dist[nx][ny][1] = dist[x][y][0] + 1;
					myqueue.push({ nx,ny,1 });
				}
			}
			//걍 빈곳으로 가기
			if (board[nx][ny] == 0 && dist[nx][ny][broken] == -1) {
				dist[nx][ny][broken] = dist[x][y][broken] + 1;
				myqueue.push({ nx,ny,broken });
			}
		}
	}

	//출력하기
	int ans0 = dist[N - 1][M - 1][0];
	int ans1 = dist[N - 1][M - 1][1];
	if (ans0==-1 && ans1==-1) cout << -1;
	else if (ans0 ==-1) cout << ans1;
	else if (ans1 ==-1) cout << ans0;
	else cout << min(ans0,ans1);
	return 0;
}
