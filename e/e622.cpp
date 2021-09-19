#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,s;
	cin>>n>>s;
	s/=1000;
	int ans_cp=0;
	int num=0;
	for(int i=1;i<=n;i++){
		int cp,iv;
		cin>>cp>>iv;
		if(iv<=29){
			iv=10;
		}
		else if(iv>=30 and iv<=39){
			iv=50;
		}
		else{
			iv=100;
		}
		if(cp+iv*s>ans_cp){
			ans_cp=cp+iv*s;
			num=i;
		}
	}
	cout<<num<<" "<<ans_cp;
}
//e622
