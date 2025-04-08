#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    stack<pair<int, int>> mystack;  
    int num;

    for (int i = 1; i <= N; ++i) {
        cin >> num;

        while (!mystack.empty() && mystack.top().first <= num) {
            mystack.pop();
        }

        if (mystack.empty()) {
            cout << "0 ";
        }
        else {
            cout << mystack.top().second << ' ';  

        }
        mystack.push({ num, i });
        
    }

    return 0;
}