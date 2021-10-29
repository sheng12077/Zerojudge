#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    while(cin>>t){
        int weight[2005];
        int value[2005];
        int dp[10005]={0};
        for(int i=0;i<t;i++){
            cin>>weight[i]>>value[i];
        }
        int k;
        cin>>k;
        for(int i=0;i<t;i++){
            for(int j=k;j>0;j--){
                if(j-weight[i]>=0){
                    dp[j]=max(dp[j],dp[j-weight[i]]+value[i]);
                }
            }
        }
        cout<<dp[k]<<endl;
    }
}
//a587
