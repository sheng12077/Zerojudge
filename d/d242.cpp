#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int num;
    vector<int>a;
    while(cin>>num){
        a.push_back(num);
    }
    int n=a.size();
    int dp[n+1];
    vector<int>vec;

    dp[0]=1;
    vec.push_back(a[0]);
    int len=1;
    for(int i=0;i<n;i++){
        if(a[i]>vec.back()){
            vec.push_back(a[i]);
            len++;
            dp[i]=len;
        }
        else{
            auto k=lower_bound(vec.begin(),vec.end(),a[i]);
            *k=a[i];
            dp[i]=(k-vec.begin()+1);
        }
    }
    cout<<len<<"\n"<<"-"<<"\n";
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(len==dp[i]){
            len--;
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}
