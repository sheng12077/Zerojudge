#include<bits/stdc++.h>
using namespace std;

vector<string>vec;

signed main(){
    string s;
    string l;
    cin>>s;
    while(cin>>l){
        vec.push_back(l);
    }
    int cnt=0;
    for (int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        cnt++;
        if (cnt==vec.size()){
            break;
        }
        else{
            cout<<s<<" ";
        }
    }
}
//c659
