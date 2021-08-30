#include<bits/stdc++.h>
using namespace std;

vector<int>vec;

signed main(){
    int k;
    while(cin>>k){
        while(k--){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.rbegin(),vec.rend());
        int h=vec.size();
        while(h--){
            cout<<vec[h]<<" ";
        }
        cout<<"\n";
        vec.clear();
    }
}
//d587
