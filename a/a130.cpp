#include<bits/stdc++.h>
using namespace std;

vector<pair<int,string>>vec;

signed main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<10;j++){
            string s;
            cin>>s;
            int v;
            cin>>v;
            pair<int,string>p;
            p.first=v;
            p.second=s;
            vec.push_back(p);
        }
        int tmp=0;
        for (int j=0;j<10;j++){
            if (vec[j].first>tmp){
                tmp=vec[j].first;
            }
        }
        cout<<"Case #"<<i+1<<":"<<"\n";
        for (int j=0;j<10;j++){
            if (vec[j].first==tmp){
                cout<<vec[j].second<<"\n";
            }
        }
        vec.clear();
    }
}
//a130
