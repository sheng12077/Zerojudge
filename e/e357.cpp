#include<bits/stdc++.h>
using namespace std;

int f(int x){
    if(x==1) {
        return x;
    }
    else if(x%2==0){ 
        return f(x/2);
    }
    else {
        return f(x-1)+f(x+1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}
//e357
