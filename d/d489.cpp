#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s;
    s=(a+b+c)/2;
    int area=s*(s-a)*(s-b)*(s-c);
    cout<<area;
}
//d489
