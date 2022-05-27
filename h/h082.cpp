#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int s[1005];
    int t[1005];
    vector<int>losscount(1005,0);
    // int losscount[1005]={0};
    queue<int>idx;
    queue<int>win;
    queue<int>loss;

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        cin>>t[i];
    }
    for(int i=1;i<=n;i++){
        int number;
        cin>>number;
        idx.push(number);
    }
    while(idx.size()!=1){
        while(idx.size()>=2){
            int player1=idx.front();
            idx.pop();
            int player2=idx.front();
            idx.pop();

            int a=s[player1];
            int b=t[player1];
            int c=s[player2];
            int d=t[player2];

            if(a*b>=c*d){
                s[player1]=a+c*d/(2*b);
                t[player1]=b+c*d/(2*a);
                s[player2]=c+c/2;
                t[player2]=d+d/2;
                win.push(player1);
                losscount[player2]++;
                if(losscount[player2]<m){
                    loss.push(player2);
                }
            }
            else{
                s[player1]=a+a/2;
                t[player1]=b+b/2;
                s[player2]=c+a*b/(2*d);
                t[player2]=d+a*b/(2*c);
                win.push(player2);
                losscount[player1]++;
                if(losscount[player1]<m){
                    loss.push(player1);
                }
            }
        }
        if(idx.size()==1){
            win.push(idx.front());
            idx.pop();
        }
        while(!win.empty()){
            idx.push(win.front());
            win.pop();
        }
        while(!loss.empty()){
            idx.push(loss.front());
            loss.pop();
        }
    }
    cout<<idx.front();
}
//h082
