#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
int parent[100001];
int root;
int num;
int tmp;
int height[100001];
int ans;
vector<int>tree[100001];


void dfs(int num){
    if(tree[num].empty()){
        height[num]=0;
    }
    else{
        int max_heigth=0;
        for(auto i:tree[num]){
            dfs(i);
            max_heigth=max(max_heigth,height[i]+1);
        }
        height[num]=max_heigth;
    }
}

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    cin>>n;
    memset(parent,-1,sizeof(parent));
    for(int i=0;i<n;i++){
        tree[i].clear();
        cin>>num;
        for(int j=0;j<num;j++){
            cin>>tmp;
            tmp--;     //transform into 0-base
            tree[i].push_back(tmp);
            parent[tmp]=i;
        }
    }
    for(int i=0;i<n;i++){
        if(parent[i]==-1){
            root=i;
            break;
        }
    }
    dfs(root);
    ans=0;
    for(int i=0;i<n;i++){
        ans+=height[i];
    }
    cout<<root+1<<"\n"<<ans;

}
//c463
