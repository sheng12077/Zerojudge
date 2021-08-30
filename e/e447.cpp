#include<bits/stdc++.h>
using namespace std;

queue<int>q;
signed main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k==1){
            int a;
            cin>>a;
            q.push(a);
        }
        else if(k==2){
            if (q.empty()){
                cout<<-1<<endl;
            }
            else{
                cout<<q.front()<<endl;
            }
        }
        else{
            if(!q.empty()){
                q.pop();
            }
        }
    }
}
//e447
