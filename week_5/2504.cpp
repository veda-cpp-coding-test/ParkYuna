#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> mystack;
    string str;
    cin >> str;
    int result = 0;
    int temp = 1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            temp *= 2;
            mystack.push('(');
        }
        else if (str[i] == '[') {
            temp *= 3;
            mystack.push('[');
        }
        else if (str[i] == ')') {
            if (mystack.empty() || mystack.top() != '(') {
                result = 0;
                break;
            }
            if (str[i - 1] == '(') {
                result += temp;

            }mystack.pop();
            temp /= 2;
        }
        else if (str[i] == ']') {
            if (mystack.empty() || mystack.top() != '[') {
                result = 0;
                break;
            }
            if (str[i - 1] == '[') {
                result += temp;

            }mystack.pop();
            temp /= 3;
        }
    }

    if (!mystack.empty()) result = 0;
    cout << result;
    return 0;
}
