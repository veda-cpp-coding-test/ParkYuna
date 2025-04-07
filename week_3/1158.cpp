#include <iostream>
#include <list>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    list<int> mylist;
    for (int i = 1; i <= N; i++) {
        mylist.push_back(i);
    }

    list<int>::iterator cursor = mylist.begin();
    cout << '<';

    while (!mylist.empty()) {
        for (int i = 1; i < K; i++) {
            cursor++;
            if (cursor == mylist.end()) {
                cursor = mylist.begin();
            }
        }

        cout << *cursor;
        cursor = mylist.erase(cursor);

        if (cursor == mylist.end()) {
            cursor = mylist.begin();
        }

        if (!mylist.empty()) {
            cout << ", ";
        }
    }
    cout << '>';

    return 0;
}