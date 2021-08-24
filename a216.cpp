#include<bits/stdc++.h>
using namespace std;

long long  N;
long long  dpF[300000];
long long  dpG[300000];

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dpF[1]=1; 
    dpG[1]=1;  
    while(cin>>N){
        for (long long i=2;i<=N;i++){
            dpF[i]=dpF[i-1]+i;
            dpG[i]=dpF[i]+dpG[i-1];
        }
        cout<<dpF[N]<<" "<<dpG[N]<<"\n";
    }
}
//a216
