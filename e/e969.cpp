#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,k;
    int cost[2]={32,55};
    int t=0;
    cin>>n>>m>>k;
    if(n<cost[k]){
        cout<<"Wayne can't eat and drink."<<endl;
        exit(0);
    }
    while(n>=cost[(t+k)%2]){
        cout<<t*m<<": Wayne ";
        if((t+k)%2==1){
            cout<<"drinks a Corn soup";
        }
        else{
            cout<<"eats an Apple pie";
        }
        n-=cost[(t+k)%2];
        if(n>1){
            cout<<", and now he has "<<n<<" dollars."<<endl;;
        }
        else if(n==1){
            cout<<", and now he has "<<n<<" dollar."<<endl;;
        }
        else{
            cout<<", and now he doesn't have money."<<endl;
        }
        t++;
    }
}
//e969
