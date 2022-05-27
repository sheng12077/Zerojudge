#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);


    int f;
    int n;
    cin>>f;
    cin>>n;
    
    int arr[1005];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for(i=0;i<n;i++){
        if(i>0){
            if(i>=2 and (arr[i-1]==arr[i-2])){
                if(arr[i-1]==0){
                    f=5;
                }
                else if(arr[i-1]==2){
                    f=0;
                }
                else if(arr[i-1]==5){
                    f=2;
                }
            }
            else{
                f=arr[i-1];
            }
        }
        
        cout<<f<<" ";
        if(f==arr[i]){
            continue;
        }
        else{
            if(f==0){
                if(arr[i]==2){
                    cout<<": Won at round ";
                }
                if(arr[i]==5){
                    cout<<": Lost at round ";
                }
            }
            if(f==2){
                if(arr[i]==5){
                    cout<<": Won at round ";
                }
                if(arr[i]==0){
                    cout<<": Lost at round ";
                }
            }
            if(f==5){
                if(arr[i]==0){
                    cout<<": Won at round ";
                }
                if(arr[i]==2){
                    cout<<": Lost at round ";
                }
            }
            
            cout<<i+1;
            break;
        } 
    }
    if(i==n){
        cout<<": Drew at round "<<n;
    }
    
    return 0; 
} 
//h026
