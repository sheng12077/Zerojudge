#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    for (int i=a;i<b+1;i++){
        if (i%2==0){
            ans+=i;
        }
    }
    cout<<ans;
}
//d490
