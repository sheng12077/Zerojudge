#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        vector<string>rule;
        int s1[100];
        int s2[100];
        for(int i=1;i<=7;i++){
            cin>>s1[i];
        }
        for(int i=1;i<=7;i++){
            cin>>s2[i];
        }
        if(s1[2]==s1[4] or s1[2]!=s1[6] or s2[2]==s2[4] or s2[2]!=s2[6]){
            rule.push_back("A");
        }
        if(s1[7]==0 or s2[7]==1){
            rule.push_back("B");
        } 
        if(s1[2]==s2[2] or s1[4]==s2[4] or s1[6]==s2[6]){
            rule.push_back("C");
        }
        if(rule.size()>0){
            for(int i=0;i<rule.size();i++){
                cout<<rule[i];
            }
        }
        else{
            cout<<"None";
        }
        cout<<endl;
    }
}
