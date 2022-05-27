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

    stack<int>stk;
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k==1){
            int a;
            cin>>a;
            stk.push(a);
        }
        if(k==2){
            if(!stk.empty()){
                cout<<stk.top()<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        if(k==3){
            if(!stk.empty()){
                stk.pop();
            }
        }
    }
}
//i213
