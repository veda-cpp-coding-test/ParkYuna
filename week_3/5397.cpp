#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	string s;
	list<char>mylist;
	list<char>::iterator cursor;

	while (T--) {
		mylist.clear();
		cursor = mylist.begin();
		cin >> s;
		for (int i = 0;i < s.length();i++) {
			if (s[i] == '<' && cursor != mylist.begin()) {
				cursor--;
			}
			else if (s[i] == '>' && cursor != mylist.end()) {
				cursor++;
			}
			else if (s[i] == '-' && cursor != mylist.begin()) {
				mylist.erase(prev(cursor));
			}
			else if(s[i]!='<'&& s[i] != '-'&& s[i] != '>'){
				mylist.insert(cursor,s[i]);
			}
		}
		for (list<char>::iterator it = mylist.begin();it != mylist.end();it++) {
			cout << *it;
			
		}
		cout << endl;
	}
	
	return 0;
}