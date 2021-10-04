#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin>>n){
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            int t1,t2;
            cin>>t1>>t2;
            pq.push(make_pair(t2,t1));                //印刷時間的先後沒影響，把目標放在裝訂時間
        }
        int print_time=0;
        int ans=0;
        while(!pq.empty()){
            print_time+=pq.top().second;
            ans=max(print_time+pq.top().first,ans);
            pq.pop();
        }
        cout<<ans<<endl;
    }
}
//b231
