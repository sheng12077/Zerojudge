#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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

    int a,b,c;
    cin>>a>>b>>c;
    if(a!=0){
        a=1;
    }
    if(b!=0){
        b=1;
    }
    bool vaild;
    vaild=false;
    if((a and b)==c){
        cout<<"AND"<<endl;
        vaild=true;
    }
    if((a or b)==c){
        cout<<"OR"<<endl;
        vaild=true;
    }
    if((a xor b)==c){
        cout<<"XOR"<<endl;
        vaild=true;
    }
    if(!vaild){
        cout<<"IMPOSSIBLE";
    }
}
