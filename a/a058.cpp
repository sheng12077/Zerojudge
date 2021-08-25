#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        if (k%3==0){
            a++;
        }
        else if(k%3==2){
            b++;
        }
        else{
            c++;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<" ";
}
//a058
