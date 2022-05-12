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

    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int ans;
    for(int i=0;i<n;i++){
        int p;
        int num_a=0;
        int num_b=0;
        while(cin>>p and p!=0){
            if(p==a){
                num_a++;
            }
            if(p==-a){
                num_a--;
            }
            if(p==b){
                num_b++;
            }
            if(p==-b){
                num_b--;
            }
        }
        if(num_a>=1 and num_b>=1){
            ans++;
        }
    }
    cout<<ans;
}
//f579
