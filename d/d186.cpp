#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    while(cin>>n>>m and n!=0 and m!=0){
        cout<<floor(sqrt(m))-ceil(sqrt(n))+1<<endl;
    }
}
