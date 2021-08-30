#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        b+=100;    
        cout<<b-a<<endl;    
    }
    else{
        cout<<b-a<<endl;
    }
}
//b877
