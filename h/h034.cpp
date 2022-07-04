#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 200005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int k=n;
    int f=0;
    vector<string>arr;
    while(n--){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    char str[500][500];
    for(int i=0;i<500;i++){
        for(int j=0;j<500;j++){
            str[i][j]='0';
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<arr[i].length();j++){
            str[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(str[j][i]>='A'){
                cout<<str[j][i];
            }
        }
    }
}
//h034
