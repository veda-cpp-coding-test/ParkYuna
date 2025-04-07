#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int>mystack;
	int K;
	cin >> K;
	int n;
	int sum = 0;

	for (int i = 0;i < K;i++) {
		cin >> n;
		if (n == 0) {
			sum -= mystack.top();
			mystack.pop();
		}
		else {
			sum += n;
			mystack.push(n);
		}
	}
	
	cout << sum;

	return 0;
}