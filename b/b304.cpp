
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n&&cin.ignore();
    string s;
    while(n--){
        getline(cin,s);
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else{
                if(stk.top()=='(' and s[i]==')'){
                    stk.pop();
                }
                else if(stk.top()=='[' and s[i]==']'){
                    stk.pop();
                }
                else{
                    stk.push(s[i]);
                }
            }
        }
        if(stk.empty()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
