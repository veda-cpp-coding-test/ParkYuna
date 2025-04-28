#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
char board[1002][1002];
int dist_fire[1002][1002];
int dist_boy[1002][1002];

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int N, M;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M;
    memset(dist_fire, -1, sizeof(dist_fire));
    memset(dist_boy, -1, sizeof(dist_boy));
    queue<pair<int, int>>fire_q;
    queue<pair<int, int>>boy_q;
    for (int i = 0;i < N;i++) {
        for (int j = 0;j < M;j++) {
            char c;
            cin >> c;
            board[i][j] = c;
            if (board[i][j] == 'F') {
                fire_q.push({ i,j });
                dist_fire[i][j] = 0;
            }
            if (board[i][j] == 'J') {
                boy_q.push({ i,j });
                dist_boy[i][j] = 0;
            }
        }
    }
   //불 먼저 bfs 돌려주자.
    while (!fire_q.empty()) {
        auto current = fire_q.front();
        fire_q.pop();
        for (int dir = 0;dir < 4;dir++) {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] == '#' || dist_fire[nx][ny] >= 0) continue;
            dist_fire[nx][ny] = dist_fire[current.first][current.second] + 1;
            fire_q.push({ nx,ny });
        }
    }

    //지훈이 bfs돌려주자
    while (!boy_q.empty()) {
        auto current = boy_q.front();
        boy_q.pop();
        int x = current.first;
        int y = current.second;

        // 만약 현재 위치가 맵의 경계면 탈출
        if (x == 0 || x == N - 1 || y == 0 || y == M - 1) {
            cout << dist_boy[x][y] + 1;
            return 0;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] == '#' || dist_boy[nx][ny] >= 0) continue;
            if (dist_fire[nx][ny] != -1 && dist_fire[nx][ny] <= dist_boy[x][y] + 1) continue;
            dist_boy[nx][ny] = dist_boy[x][y] + 1;
            boy_q.push({ nx, ny });
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
