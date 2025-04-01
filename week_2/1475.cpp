#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int>v1(10);
	string N;
	cin >> N;
	
	for (int i = 0;i < N.length();i++) {
		v1[N[i] - '0']++;
	}

	v1[9]=v1[6] = (v1[6] + v1[9]+1) / 2;
	cout << *max_element(v1.begin(), v1.end());

	return 0;
}