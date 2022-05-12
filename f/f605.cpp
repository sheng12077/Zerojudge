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

    int n,d;
    cin>>n>>d;
    int num=0;
    int total=0;
    for(int i=0;i<n;i++){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[2]-arr[0]>=d){
            int average=(arr[0]+arr[1]+arr[2])/3;
            total+=average;
            num++;
        }
    }
    cout<<num<<" "<<total;
}
