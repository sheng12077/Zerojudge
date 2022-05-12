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

    int a,b,c;
    int d,e,f;
    int n;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cin>>n;
    int ans=-10e5;
    for(int i=0;i<=n;i++){
        int tmp=(a*i*i+b*i+c)+(d*(n-i)*(n-i)+e*(n-i)+f);
        ans=max(tmp,ans);
    }
    cout<<ans;
}
//f312
