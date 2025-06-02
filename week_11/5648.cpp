#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<long long>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long num;
        cin>>num;
        string stemp=to_string(num);
        reverse(stemp.begin(),stemp.end());
        v1.push_back(stoll(stemp));
    }
    sort(v1.begin(),v1.end());
    for(auto &i:v1){
        cout<<i<<'\n';
    }
    return 0;
}