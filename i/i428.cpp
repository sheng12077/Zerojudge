#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 200005
#define mod 1000000007
#define x first
#define y second

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    int maxd=0;
    int mind=1e8;
    for(int i=1;i<n;i++){
        int k=abs(arr[i].x-arr[i-1].x)+abs(arr[i].y-arr[i-1].y);
        mind=min(mind,k);
        maxd=max(maxd,k);
    }
    cout<<maxd<<" "<<mind;
}
