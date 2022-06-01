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

    int n,k;
    cin>>n>>k;
    int arr[maxn];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(k--){
        int q;
        cin>>q;
        int l=0,r=n;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]>=q){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        if(arr[r]==q){
            cout<<r+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
//d732
