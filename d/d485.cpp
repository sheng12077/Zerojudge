#include<bits/stdc++.h>
using namespace std;

signed main(){
int a,b;
    while(cin>>a>>b){
        if (a%2==0){
            cout<<(b/2)-(a/2)+1;
        }
        else{
            cout<<(b/2)-(a/2)<<endl;
        }
    }
}
//d485
