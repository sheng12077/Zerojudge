#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	int grid[n][n];
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<s.length();j++){
			if(s[j]=='#'){//""(no)  ''(yes)
				grid[i][j]=-1;
			}       
			else{
				grid[i][j]=0;
			}      
		}
	}
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	queue<int>qx;
	queue<int>qy;
	qx.push(1);
	qy.push(1);
	grid[1][1]=1;

	while(!qx.empty()){
		int x=qx.front();
		int y=qy.front();
		qy.pop();
		qx.pop();
		for(int i=0;i<4;i++){
			int tx=x+dx[i];
			int ty=y+dy[i];
			if(grid[tx][ty]==0){
				grid[tx][ty]=grid[x][y]+1;
				qx.push(tx);
				qy.push(ty);
			}
		}
	}
	if(grid[n-2][n-2]==0){
		cout<<"No solution!"<<"\n";
	}
	else{
		cout<<grid[n-2][n-2]<<"\n";
		
	}
}
