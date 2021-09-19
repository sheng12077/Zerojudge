#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	while(cin>>n>>m){
        int vis[805]={};
		vector<int>graph[n];
		queue<int>que;
		while(m--){
			int a,b;                  //edge
			cin>>a>>b;	
			a--;
			b--;
			graph[a].push_back(b);
		}
		int s,e;                      //s=start  e=end
		cin>>s>>e;
		s--;
		e--;
		que.push(s);
		vis[s]=1;
		while(!que.empty()){
			int now=que.front();
			que.pop();
			for(auto i:graph[now]){
				if(vis[i]!=1){
					vis[i]=1;
					que.push(i);
				}
			}
		}
		if(vis[e]==1){
			cout<<"Yes!!!"<<"\n";
		}
		else{
			cout<<"No!!!"<<"\n";
		}
	}
}
//a290
