#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int w=100;
    while(cin>>n){
        int weight[10005];
        int cost[10005];
        int dp[10005]={0};
        for(int i=1;i<=n;i++){
            cin>>weight[i]>>cost[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=100;j>0;j--){
                if(j-weight[i]>=0){
                    dp[j]=max(dp[j],dp[j-weight[i]]+cost[i]);
                }
            }
        }
        cout<<dp[100]<<endl;
    }
}
//d637
