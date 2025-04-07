#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	
	string s;
	int M;
	string c;
	char w;
	cin >> s >> M;

	list<char>mylist(s.begin(), s.end());
	//auto cursor=mylist.end();
	list<char>::iterator cursor = mylist.end();
	

	while (M--) { 
		cin >> c;
		if (c == "P") {
			cin >> w;
			mylist.insert(cursor, w);
			
		}
		else if(c == "L") {
			if (cursor != mylist.begin()) {
				cursor--;
			}
		}
		else if (c == "D") {
			if (cursor != mylist.end()) {
				cursor++;
			}
		}
		else {//B
			if (cursor != mylist.begin()) {
				mylist.erase(prev(cursor));
			}  
		}
	}
	
	for ( list<char>::iterator it = mylist.begin();it != mylist.end();it++) {
		cout << *it;
	}
	
	return 0;
}

