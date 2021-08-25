#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    while(cin>>n){
        int sum=0;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
        }
        if (sum>59*n){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}
//a148
