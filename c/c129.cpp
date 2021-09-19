#include <bits/stdc++.h>
using namespace std;
#define int long long  

int n,m;
int graph[105][105];

void island(int x,int y){
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1};
	for(int i=0;i<8;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=0 and ty>=0 and tx<n and ty<m and graph[tx][ty]==1){
			graph[tx][ty]=0;
			island(tx,ty);
		}
	}
}


signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while(cin>>n>>m and n!=0 and m!=0){
		int ans=0;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			for(int j=0;j<m;j++){
				if(s[j]=='*'){
					graph[i][j]=0;
				}
				else{
					graph[i][j]=1;
				}
			}
		}
		for(int x=0;x<n;x++){
			for(int y=0;y<m;y++){
				if(graph[x][y]==1){
					island(x,y);
					ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
}
//c129
