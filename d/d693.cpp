#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int N;    
	while(cin>>N && N!=0){
		int a=1;
		for(int i=0;i<N;i++) {
			int b;
			cin>>b;
			a=(a*b) /__gcd(a,b) ;
		}
		cout << a << endl ;
	}
}
