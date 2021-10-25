#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string name[55];
    string input;
    int sum=0;
    int pick;
    getline(cin,input);
    stringstream ss(input);
    while(ss>>name[sum]){
        sum++;
    }
    cin>>pick;
    cout<<name[sum-pick]<<endl;
}
//e997
