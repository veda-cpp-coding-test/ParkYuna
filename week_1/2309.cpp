#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*풀이: 둘이 합쳐 전체 합 sum에서 100을 뺀 값이 되면 그 둘만 빼고 출력하면 됨.*/

int main() {
	vector<int> v1;
	int num;
	int sum=0;

	//입력받기
	for (int i = 0;i < 9;i++) {
		cin >> num;
		v1.push_back(num);
		sum += num;
	}
	//정렬
	sort(v1.begin(), v1.end());
	

	int i,j;
	bool found=false;

	//둘이 합쳐서 (sum-100)인지 검사
	for (i = 0; i < 8;i++) {
		for ( j = i+1; j < 9; j++) {
			if (v1[i] + v1[j] == (sum-100) ) {
				found = true;
				break;
			}
		}
		if (found) break;
	}
	
	//출력하기
	for (int k = 0; k < 9;k++) {
		if (k != i && k != j) {
			cout << v1[k] << endl;
		}
		
	}
	
	return 0;
}