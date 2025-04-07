#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int>mystack;

    string answer;
    int num = 1;

    while (n--){
        int target;
        cin >> target;
        while (num <= target) {
            mystack.push(num++);
            answer += "+\n";
        }
       
        if (mystack.top() != target) {
            cout << "NO";
            return 0;
        }
        mystack.pop();
        answer += "-\n";

    }

    cout << answer;
   

    return 0;
}