#include <iostream>
#include <deque>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	deque<int>mydeque;
	int T;
	cin >> T;
	while (T--) {
		//flag가 true면 첫번째 수 pop, false면 마지막 수 pop
		//덱 요소들을 출력할 때 flag가 true면 안뒤집고 false면 뒤집기.
		string command;
		cin >> command;
		bool flag = true;
		int n;
		cin >> n;
		string nums;
		cin >> nums;
		nums.erase(remove(nums.begin(), nums.end(), '['), nums.end());
		nums.erase(remove(nums.begin(), nums.end(), ']'), nums.end());
		stringstream ss(nums);
		string num;
		bool errorflag = false;
		while (getline(ss, num, ',')) {
			mydeque.push_back(stoi(num));
		}
		for (auto c : command) {
			if (c == 'R') {
				flag = !flag;
			}
			else {//D
				if (mydeque.empty()) {
					cout << "error" << '\n';
					errorflag = true;
					break;
				}
				else {
					if (flag)mydeque.pop_front();
					else mydeque.pop_back();
				}
			}
		}
		if (!errorflag) {
			cout << '[';
			if (flag) {
				for (auto i = mydeque.begin();i != mydeque.end();i++) {
					cout << *i;
					if (i + 1 != mydeque.end())cout << ',';
				}
			}
			else {
				for (auto i = mydeque.rbegin();i != mydeque.rend();i++) {
					cout << *i;
					if (i + 1 != mydeque.rend()) cout << ',';
				}
			}
			cout << ']' << '\n';
			mydeque.clear();
		}
	}
	return 0;
}