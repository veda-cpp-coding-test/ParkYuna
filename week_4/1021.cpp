#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> mydeque;
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        mydeque.push_back(i);
    }

    int cnt = 0;

    while (M--) {
        int num;
        cin >> num;
        while (mydeque.front() != num) {  
            auto it = find(mydeque.begin(), mydeque.end(), num);
            int index = it - mydeque.begin();

            if (index <= mydeque.size() / 2) {   
                mydeque.push_back(mydeque.front());
                mydeque.pop_front();
            }
            else {
                mydeque.push_front(mydeque.back());
                mydeque.pop_back();
            }
            cnt++;
        }

        mydeque.pop_front(); 
    }

    cout << cnt << '\n';
    return 0;
}
