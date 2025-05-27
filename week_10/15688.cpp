//수 정렬하기 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,n;
    cin>>N;
    vector<int>v1;
    while(N--){
        cin >>n;
        v1.push_back(n);
    }
    sort(v1.begin(),v1.end());
    for(auto i:v1){
        cout<<i<<'\n';
    }
}