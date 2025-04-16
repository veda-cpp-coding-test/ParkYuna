#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int>myqueue;

	int N;
	cin >> N;
	while (N--) {
		string command;
		cin >> command;	
		if (command == "push") {
			int x;
			cin >> x;
			myqueue.push(x);
		}
		else if (command == "pop") {
			if (myqueue.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << myqueue.front() << '\n';
				myqueue.pop();
			}
		}
		else if (command == "size") {
			cout << myqueue.size()<< '\n';
		}
		else if (command == "empty") {
			if (myqueue.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (command == "front") {
			if (myqueue.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << myqueue.front() << '\n';
			}
		}
		else if (command == "back") {
			if (myqueue.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << myqueue.back() << '\n';
			}
		}
	}
	return 0;
}