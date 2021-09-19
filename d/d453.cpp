#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int k;
	cin>>k;
	while(k--){
		int n,m;
		cin>>n>>m;
		int graph[n][m];
		int path[n][m];
		int sx,sy;
		cin>>sx>>sy;
		sx--;
		sy--;
		int ex,ey;
		cin>>ex>>ey;
		ex--;
		ey--;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			for(int j=0;j<m;j++){
				if(s[j]=='0'){
					graph[i][j]=0;
				}
				else{
					graph[i][j]=1;
				}
				path[i][j]=0;
			}
		}
		int dx[4]={0,0,1,-1};
		int dy[4]={1,-1,0,0};
		queue<int>qx;
		queue<int>qy;
		qx.push(sx);
		qy.push(sy);
		path[sx][sy]=1;
		while(!qx.empty()){
			int x=qx.front();
			int y=qy.front();
			qx.pop();
			qy.pop();
			for(int i=0;i<4;i++){
				int tx=x+dx[i];
				int ty=y+dy[i];
				if(tx>=0 and ty>=0 and tx<n and ty<m and path[tx][ty]==0 and graph[tx][ty]!=1){
					path[tx][ty]=path[x][y]+1;
					qx.push(tx);
					qy.push(ty);
				}
			}
		}
		cout<<path[ex][ey]<<"\n";
	}
}
//d453
