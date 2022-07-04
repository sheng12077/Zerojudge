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

    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    char str[maxn];
    for(int i=0;i<b.length();i++){
        str[i]=b[i];
    }
    int l=0,r=m-1;
    char new_str[maxn];
    for(int i=0;i<m;i++){
        if(a[i]=='0'){
            new_str[l]=b[i];
            l++;
        }
        else{
            new_str[r]=b[i];
            r--;
        }
    }
    // for(int i=0;i<m;i++){
    //     cout<<new_str[i];
    // }
    int one_cnt=0;
    for(int i=0;i<m;i++){
        if(a[i]=='1'){
            one_cnt++;
        }
    }
    // cout<<one_cnt;
    if(one_cnt%2==1){
        deque<char>r_to_l;
        deque<char>l_to_r;
        deque<char>ans_str;
        // cout<<"HI";
        if(m%2==1){
            int mid=m/2;
            // cout<<b[mid]<<endl;
            for(int i=m-1;i>mid;i--){
                r_to_l.push_back(new_str[i]);
                // cout<<i<<" ";
            }
            for(int i=0;i<mid;i++){
                l_to_r.push_back(new_str[i]);
                // cout<<i<<" ";
            }
            while(!r_to_l.empty()){
                ans_str.push_back(r_to_l.back());
                r_to_l.pop_back();
            }
            ans_str.push_back(new_str[mid]);
            while(!l_to_r.empty()){
                ans_str.push_back(l_to_r.front());
                l_to_r.pop_front();
            }
            while(!ans_str.empty()){
                cout<<ans_str.front();
                ans_str.pop_front();
            }
        }
        else{
            int mid=m/2-1;
            // cout<<b[mid]<<endl;
            for(int i=m-1;i>mid;i--){
                r_to_l.push_back(new_str[i]);
                // cout<<i<<" ";
            }
            for(int i=0;i<=mid;i++){
                l_to_r.push_back(new_str[i]);
                // cout<<i<<" ";
            }
            while(!r_to_l.empty()){
                ans_str.push_back(r_to_l.back());
                r_to_l.pop_back();
            }
            // ans_str.push_back(new_str[mid]);  不
            while(!l_to_r.empty()){
                ans_str.push_back(l_to_r.front());
                l_to_r.pop_front();
            }
            while(!ans_str.empty()){
                cout<<ans_str.front();
                ans_str.pop_front();
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
            cout<<new_str[i];
        }
    }
}
//i400 60%
