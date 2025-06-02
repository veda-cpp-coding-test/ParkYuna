#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
bool compare(const pair<long long,int>&A,const pair<long long,int>&B){
    if(A.second==B.second){
        return A.first<B.first;
    }
    return A.second>B.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<long long,int>m1;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        long long num;
        cin>>num;
        auto it=m1.find(num);
        if(it!=m1.end()){
            //있는 경우
            m1[num]++;
        }
        else{
            m1.insert({num,1});
        }
    }
    vector<pair<long long,int>>v1(m1.begin(),m1.end());
    sort(v1.begin(),v1.end(),compare);
    cout<<v1[0].first;
    return 0;
}