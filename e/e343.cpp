#include<bits/stdc++.h>
using namespace std;

signed main(){
    double n,m;
    cin>>n>>m;
    m/=100;
    double ans=n/(m*m);
    cout<<fixed<<setprecision(1)<<ans;
}
