#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 100005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int vec[maxn];
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(vec[i]==0){
            if(i==0){
                ans+=vec[1]; 
            }
            else if(i==n-1){
                ans+=vec[n-2];
            }
            else{
                ans+=min(vec[i+1],vec[i-1]);
            }
        }
    }
    cout<<ans;
}
