#include<bits/stdc++.h>
using namespace std;


int n,L,R,cnt;
vector<int> vec;

signed main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    for (int i=0;i<=10000000;i++){
        vec.push_back(0);
    }

    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>L;
        cin>>R;
        for (int j=L;j<R;j++){
            vec[j]=1;
        }
    }
    for (int k=0;k<=10000000;k++){
        if (vec[k]==1){
            cnt+=1;
            }
        }
    cout<<cnt<<"\n";
}
//b966
