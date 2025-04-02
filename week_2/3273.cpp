#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,x;
	vector<int> v1;
	int element;
	int cnt = 0;

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> element;
		v1.push_back(element);
	}
	cin >> x;
	sort(v1.begin(), v1.end());
	int left = 0;
	int right = n - 1;

	while(left<right){
		if (v1[left] + v1[right] == x) {
			left++;
			right--;
			cnt++;
		}
		else if (v1[left] + v1[right] < x) {
			left++;
		}
		else {
			right--;
		}
	}
	cout << cnt;
	return 0;
}