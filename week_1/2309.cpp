#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*Ǯ��: ���� ���� ��ü �� sum���� 100�� �� ���� �Ǹ� �� �Ѹ� ���� ����ϸ� ��.*/

int main() {
	vector<int> v1;
	int num;
	int sum=0;

	//�Է¹ޱ�
	for (int i = 0;i < 9;i++) {
		cin >> num;
		v1.push_back(num);
		sum += num;
	}
	//����
	sort(v1.begin(), v1.end());
	

	int i,j;
	bool found=false;

	//���� ���ļ� (sum-100)���� �˻�
	for (i = 0; i < 8;i++) {
		for ( j = i+1; j < 9; j++) {
			if (v1[i] + v1[j] == (sum-100) ) {
				found = true;
				break;
			}
		}
		if (found) break;
	}
	
	//����ϱ�
	for (int k = 0; k < 9;k++) {
		if (k != i && k != j) {
			cout << v1[k] << endl;
		}
		
	}
	
	return 0;
}