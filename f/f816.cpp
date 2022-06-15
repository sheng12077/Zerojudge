#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 400005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    pair<int,int>p[maxn];
    priority_queue<int,vector<int>,greater<int>>pq;

	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i].first>>p[i].second;
	int sum=0;
    int decrease=0;
	for(int i=0;i<n;i++) {
		decrease+=p[i].second;
		int temp=0;
		int sz=pq.size();
		while(!pq.empty() and pq.top()<decrease) {
			temp+=decrease-pq.top();
			pq.pop();
		}
		sum-=(p[i].second*sz)-temp-p[i].first;
		cout<<sum<<endl;
		pq.push(decrease+p[i].first);
	}
}
//f816
