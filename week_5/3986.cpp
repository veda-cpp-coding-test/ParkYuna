#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<char> v1;
    string str;
    int cnt=0;
    int N;
    cin >> N;
    while (N--) {
        v1.clear();
        cin >> str;
        for (int i = 0;i < str.length();i++) {
            if (v1.empty()) {
                v1.push_back(str[i]);
            }
            else {
                if (v1.back() == str[i]) {
                    v1.pop_back();
                }
                else {
                    v1.push_back(str[i]);
                }
            }
        }
        if (v1.empty()) cnt++;
    }
    cout << cnt;
    return 0;
}