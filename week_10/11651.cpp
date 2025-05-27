#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<int,int>& a, const pair<int,int>& b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<int,int>>v1;
    int N;
    cin>>N;
    int x,y;
    while(N--){
        cin>>x>>y;
        v1.push_back({x,y});
    }
    sort(v1.begin(),v1.end(),compare);

    for(auto& i:v1){
        cout<<i.first<<' '<<i.second<<'\n';
    }
    return 0;
}