#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int T;
int l;
int dist[302][302];

int dx[8] = { 1,2,-1,-2, 2, 1,-1,-2};
int dy[8] = { -2,-1,-2,-1,1,2,2,1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while (T--) {
        int rx, ry;
        int gx, gy;
        int cnt=0;
        cin >> l;
        cin >> rx >> ry;
        cin >> gx >> gy;

        memset(dist, -1, sizeof(dist));
        dist[rx][ry] = 0;

        queue<pair<int, int>>myqueue;
        myqueue.push({ rx,ry });
        
        while (!myqueue.empty()) {
            auto current = myqueue.front();
            myqueue.pop();
            if (gx == current.first && gy == current.second) {
                cout << dist[current.first][current.second] << endl;
                break;
            }
            for (int dir = 0;dir < 8;dir++) {
                int nx = current.first + dx[dir];
                int ny = current.second + dy[dir];
                if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[current.first][current.second] + 1;
                    myqueue.push({ nx,ny });
                }
            }
            
        } 
    }
    return 0;
}