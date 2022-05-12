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

    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            a+=(int)s[i]-'0';
        }
        else{
            b+=(int)s[i]-'0';
        }
    }
    cout<<abs(a-b);
}
//c290
