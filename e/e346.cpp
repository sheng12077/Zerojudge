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

    int n;
    cin>>n;
    int arr[maxn];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }
}
//e346
