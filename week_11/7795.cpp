#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        vector<int>v1;
        vector<int>v2;
        int cnt=0;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<M;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.begin(),v2.end());

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(v1[i]>v2[j]){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;
}