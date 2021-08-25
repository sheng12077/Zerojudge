#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,s,i;
    while(cin>>a>>b){
        s=a;
        i=1;
        while(s<=b){
            s=s+a+i;
            i++;
        }
        cout<<i<<endl;
    }
}
//a215
