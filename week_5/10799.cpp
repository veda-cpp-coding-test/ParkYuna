#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    stack<char> mystack;
    int result = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            mystack.push('(');
        }
        else {
            mystack.pop();
            if (str[i - 1] == '(') {
                // 레이저
                result += mystack.size();
            }
            else {
                // 막대기 끝
                result++;
            }
        }
    }

    cout << result;
    return 0;
}
