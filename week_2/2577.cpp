#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> v1(10);
	int A, B, C, D;
	string result;
	cin >> A >> B >> C;
	D = A * B * C;
	result = to_string(D);

	for (int i = 0;i < result.length(); i++) {
		v1[(result[i]-'0')]++;
	}
	for (int i = 0;i < 10; i++) {
		cout << v1[i]<<endl;
	}
	return 0;
}