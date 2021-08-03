#include<bits/stdc++.h>
#include<utility>
using namespace std;

stack <int> stk1;
int n,operation,inputval;

signed main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>operation;
        if (operation==1){
            stk1.pop();
        }
        else if (operation==2){
            cout<<stk1.top()<<endl;
        }
        else{
            cin>>inputval;
            stk1.push(inputval);
        }
    }
}
//b923
