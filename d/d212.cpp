#include<bits/stdc++.h>
using namespace std;
#define OAO 1000000007

int N;
long long dp[5000000];
signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[1]=1;
    dp[2]=2;    
    while(cin>>N){
        if (N>=3){
            for (int i=3;i<=N;i++){
                dp[i]=(dp[i-1]+dp[i-2]);
            }
        }
    cout<<dp[N]<<"\n";
    }
}
//d212
