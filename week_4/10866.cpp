#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	deque<int> mydeque;	
	int N;
	cin >> N;	
	while (N--) {
		string command;	
		cin >> command;	
		if (command == "push_front") {
			int x;
			cin >> x;
			mydeque.push_front(x);
		}
		else if (command == "push_back") {
			int x;
			cin >> x;
			mydeque.push_back(x);
		}
		else if (command == "pop_front") {
			if (mydeque.empty()) cout << -1 << '\n';
			else {
				cout << mydeque.front() << '\n';
				mydeque.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (mydeque.empty()) cout << -1 << '\n';
			else {
				cout << mydeque.back() << '\n';
				mydeque.pop_back();
			}
		}
		else if (command == "size") {
			cout << mydeque.size() << '\n';
		}
		else if (command == "empty") {
			cout << mydeque.empty() << '\n';
		}
		else if (command == "front") {
			if (mydeque.empty()) cout << -1 << '\n';
			else cout << mydeque.front() << '\n';
		}
		else if (command == "back") {
			if (mydeque.empty()) cout << -1 << '\n';
			else cout << mydeque.back() << '\n';
		}	
	}	

	return 0;
}