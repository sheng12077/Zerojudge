#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 200005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int a[maxn];
    int b[maxn];
    memset(a,0,sizeof(a));
    while(m--){
        int x,y,w;
        cin>>x>>y>>w;
        a[x]+=w;
        a[y+1]-=w;
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i]+a[i-1];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=a[i]*b[n-i+1];
    }
    cout<<ans;
}
//g597
