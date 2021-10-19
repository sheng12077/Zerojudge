#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c>=b and a>b){
            cout<<"Poor Snail"<<endl;
        }
        else if(a==0){
            cout<<"0"<<endl;
        }
        else if(b>=a){
            cout<<"1"<<endl;
        }
        else{
            cout<<ceil(1.0*(a-b)/(b-c)+1)<<endl;
        }
    }
}   
//a686
