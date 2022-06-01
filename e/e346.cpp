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
    int diff;
    cin>>diff;
    cout<<diff<<" ";
    n-=1;
    while(n--){
        int k;
        cin>>k;
        cout<<k-diff<<" ";
        diff=k;
    }
}
//e346
