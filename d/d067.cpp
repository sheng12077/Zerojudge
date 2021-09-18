#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y;
	cin>>y;
	if(y%4==0&&y%100!=0||y%400==0){
		cout<<"a leap year"<<endl;
	}
	else{
		cout<<"a normal year"<<endl;
	}
}
//d067
