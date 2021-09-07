#include<bits/stdc++.h>
using namespace std;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(sqrt(b*b-a*4*c)==int(sqrt(b*b-a*4*c))){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<'\n';
        }
    }
}
