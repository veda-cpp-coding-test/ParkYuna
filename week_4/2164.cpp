#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int>myqueue;

	int N;
	cin >> N;	
	for (int i = 1;i <= N;i++) {
		myqueue.push(i);
	}
	while (myqueue.size() > 1) {
		myqueue.pop();
		myqueue.push(myqueue.front());
		myqueue.pop();
	}	
	cout << myqueue.front();

	return 0;
}