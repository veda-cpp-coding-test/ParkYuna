#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
using namespace std;
bool compare(const tuple<int,int,string>& a,const tuple<int,int,string>& b){
    int age1,idx1,age2,idx2;
    string name1,name2;
    tie(age1,idx1,name1)=a;
    tie(age2,idx2,name2)=b;
    if(age1==age2) return idx1<idx2;
    return age1<age2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    vector<tuple<int,int,string>>v1;
    int age;
    string name;
    for(int i=0;i<N;i++){
        cin>>age>>name;
        v1.push_back({age,i,name});
    }
    sort(v1.begin(),v1.end(),compare);
    
    for(auto& i:v1){
        int a,b;
        string c;
        tie(a,b,c)=i;
        cout<<a<<' '<<c<<'\n';
    }
    return 0;
}