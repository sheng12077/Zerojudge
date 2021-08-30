#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
signed main(){
    int a,b;
    cin>>a>>b;
    if (a>b){
        swap(a,b);
    }   
    int ans=0;
    for (int i=a;i<b+1;i++){
        if (i%2==0){
            ans+=i;
        }
    }
    cout<<ans;
}
//d491
