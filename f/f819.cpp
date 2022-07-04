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

    int n;
    cin>>n;
    int k=n;
    vector<pair<int,int>>arr;
    while(n--){
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    int ans=0;
    vector<int>num;
    sort(arr.begin(),arr.end());
    for(int i=0;i<k;i++){
        if(arr[i].second>100){
            ans+=(arr[i].second-100)*5;
            num.push_back(arr[i].first);
        }
    }
    if(ans==0){
        cout<<0;
    }
    else{
        for(int i=0;i<num.size();i++){
            cout<<num[i]<<" ";
        }
        cout<<endl;
        cout<<ans;
    }
}
//f819
