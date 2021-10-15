#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int dp[n]={0};
    int cost[105];
    int weight[105];
    for(int i=1;i<=m;i++){
        cin>>weight[i]>>cost[i];
    }
    for(int i=1;i<=m;i++){  
        for(int j=n;j>0;j--){
            if(j-weight[i]>=0){
                dp[j]=max(dp[j],dp[j-weight[i]]+weight[i]*cost[i]);
            }
        }
    }
    cout<<dp[n-1];
}
//b131
