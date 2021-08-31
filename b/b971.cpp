#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    while(cin>>a>>b>>c){
        for(int i = a;;i+=c){
            cout << i <<" ";
            if(i==b){
            break;
            }
        }
    cout << "\n";
    }
} 
//b971
