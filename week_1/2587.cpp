#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector <int> v1;
	int num;
	int sum = 0;

	for (int i= 0;i < 5;i++) {
		cin >> num;
		v1.push_back(num);
		sum += num;
	}
	sort(v1.begin(), v1.end());
	cout << sum/5<<endl;
	cout << v1[2];
	return 0;
}