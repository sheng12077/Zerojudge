#include<bits/stdc++.h>
using namespace std;

void initialise(int n,int parent[]){
    for (int i=0;i<n;i++){
        parent[i]=i;
    }
}

int find(int x,int parent[]){
    if (parent[x]==x){
        return x;
    }
    else{
        return parent[x]=find(parent[x],parent);
    }
}

void merge (int x,int y,int parent[]){
    int x_root=find(x,parent);
    int y_root=find(y,parent);
    parent[x_root]=y_root;   
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int parent[50001];
    initialise(n,parent);
    int edges[n][2];
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        edges[i][0]=i;
        edges[i][1]=k;
        merge(edges[i][0],edges[i][1],parent);
    }
    int ans=0;
    for (int i=0;i<n;i++){
        if(find(i,parent)==i){
            ans++;
        }
    }
    cout<<ans;
}
//c291
