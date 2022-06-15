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
    int p[maxn];
    vector<int>pre;
    cin>>n>>m;
    for (int i=0,tot=0;i<n;i++){
        cin>>p[i];
        tot+=p[i];
        pre.push_back(tot);
    }
    int s=0;
    for (int i=0,q;i<m;i++){
        cin>>q;
        if(s!=0){
            q+=pre[s-1];
        }
        if(q>pre[n-1]){
            q-=pre[n-1];
        }
        s=(int)(lower_bound(pre.begin(),pre.end(),q)-pre.begin())+1;
        s%=n;
    }
    cout<<s;
}
//f581
