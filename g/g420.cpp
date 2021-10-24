#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        b.push_back(k);
    }
    int i=0;
    int cnt=0;
    bool flag=true;
    while(m>=0 and flag==true){
        m-=a[i];
        cnt++;
        if(m<0){
            flag=false;
        }
        m+=b[i];
        i++;
    }
    cout<<cnt;
}
//g420
