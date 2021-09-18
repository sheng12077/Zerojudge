#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int l,r,c; 
    int sx,sy,sz;                                   //start_x    start_y   start_z   push sx sy xz
    int ex,ey,ez;                                   //end_x      end_y     end_z     輸出path[ex][ey][ez]
    while(cin>>l>>r>>c and l!=0 and r!=0 and c!=0){
        int maze[l][r][c];                          //迷宮                          
        int path[l][r][c];                          //紀錄路徑長
        for(int i=0;i<l;i++){
            for(int j=0;j<r;j++){
                string s;
                cin>>s;
                for(int k=0;k<c;k++){
                    if(s[k]=='S'){                  //是起點就導出sx sy sz
                        maze[i][j][k]=0;
                        sx=i;
                        sy=j;
                        sz=k;
                    }
                    else if(s[k]=='E'){             //是終點就導出ex ey ez
                        maze[i][j][k]=0;
                        ex=i;
                        ey=j;
                        ez=k;
                    }
                    else if(s[k]=='.'){
                        maze[i][j][k]=0;
                    }
                    else{                           //#設為-1
                        maze[i][j][k]=-1;
                    }               
                    path[i][j][k]=0;                //initalize
                }
            }
        }
        queue<int>qx;
        queue<int>qy;
        queue<int>qz;
        qx.push(sx);
        qy.push(sy);
        qz.push(sz);

        int dx[6]={0,0,0,0,-1,1};
        int dy[6]={1,0,-1,0,0,0};
        int dz[6]={0,1,0,-1,0,0};

        while(!qx.empty()){
            int x=qx.front();
            int y=qy.front();
            int z=qz.front();
            qx.pop();
            qy.pop();
            qz.pop();
            for(int i=0;i<6;i++){
                int tx=x+dx[i];
                int ty=y+dy[i];
                int tz=z+dz[i];
                if(path[tx][ty][tz]==0 and maze[tx][ty][tz]!=-1 and tx>=0 and ty>=0 and tz>=0 and tx<l and ty<r and tz<c and (tx!=sx or ty!=sy or tz!=sz)){
                    path[tx][ty][tz]=path[x][y][z]+1;
                    qx.push(tx);
                    qy.push(ty);
                    qz.push(tz);
                }
            }
        }
        if(path[ex][ey][ez]!=0){
            cout<<"Escaped in "<<path[ex][ey][ez]<<" minute(s)."<<"\n";
        }
        else{
            cout<<"Trapped!"<<"\n";
        }
    }
}
/*
⠄⠄⠄⠄⠄⠄⠄⠈⠉⠁⠈⠉⠉⠙⠿⣿⣿⣿⣿⣿
⠄⠄⠄⠄⠄⠄⠄⠄⣀⣀⣀⠄⠄⠄⠄⠄⠹⣿⣿⣿
⠄⠄⠄⠄⠄⢐⣲⣿⣿⣯⠭⠉⠙⠲⣄⡀⠄⠈⢿⣿
⠐⠄⠄⠰⠒⠚⢩⣉⠼⡟⠙⠛⠿⡟⣤⡳⡀⠄⠄⢻
⠄⠄⢀⣀⣀⣢⣶⣿⣦⣭⣤⣭⣵⣶⣿⣿⣏⠄⠄⣿
⠄⣼⣿⣿⣿⡉⣿⣀⣽⣸⣿⣿⣿⣿⣿⣿⣿⡆⣀⣿
⢠⣿⣿⣿⠿⠟⠛⠻⢿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣼
⠄⣿⣿⣿⡆⠄⠄⠄⠄⠳⡈⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠄⢹⣿⣿⡇⠄⠄⠄⠄⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠄⠄⢿⣿⣷⣨⣽⣭⢁⣡⣿⣿⠟⣩⣿⣿⣿⠿⠿⠟
⠄⠄⠈⡍⠻⣿⣿⣿⣿⠟⠋⢁⣼⠿⠋⠉⠄⠄⠄⠄
⠄⠄⠄⠈⠴⢬⣙⣛⡥⠴⠂⠄⠄⠄⠄⠄⠄⠄⠄⠄
*/
