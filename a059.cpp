#include<bits/stdc++.h>
using namespace std;

vector<int>table(35);


signed main(){
    for (int i=1;i*i<1000;i++){
        table.push_back(i*i);
    }
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int a,b;
        int ans_sum=0;
        cin>>a>>b;
        for (int val:table){
            if(val>=a and val<=b){
                ans_sum+=val;
            }
        }
        cout<<"Case "<<i<<": "<<ans_sum<<"\n";
    }
}
//a059
