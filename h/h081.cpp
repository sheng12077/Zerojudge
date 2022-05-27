#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,d;
    cin>>n>>d;
    int stock[100005];   //第i天的股價
    for(int i=1;i<=n;i++){
        cin>>stock[i];
    }
    bool position=true;  //持倉狀況
    int entry=stock[1];    //第一天的股價
    int exit=0;
    int profit=0;
    for(int i=2;i<=n;i++){
        if(stock[i]-entry>=d and position==true){
            exit=stock[i];
            profit=profit+(exit-entry);
            position=false;
        }
        if(position==false and exit-stock[i]>=d){
            entry=stock[i];
            position=true;
        }
    }
    cout<<profit<<endl;
}
//h081
