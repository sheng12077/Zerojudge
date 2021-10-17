#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int lis[50];
    cin>>n;
    for(int i=0;i<3;i++){
        int k;
        cin>>k;
        lis[k]=1;
    }
    for(int i=n;i>0;i--){
        if(lis[i]!=1){
            cout<<"No. "<<i<<endl;
        }
    }
}
//e968
