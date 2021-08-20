#include<bits/stdc++.h>
using namespace std;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    int i=1;
    while(cin>>s){
        if (s=="HELLO"){
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        }
        else if(s=="HOLA"){
            cout<<"Case "<<i<<": SPANISH"<<endl;
        }
        else if(s=="HALLO"){
            cout<<"Case "<<i<<": GERMAN"<<endl;
        }
        else if(s=="BONJOUR"){
            cout<<"Case "<<i<<": FRENCH"<<endl;
        }
        else if(s=="CIAO"){
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        }
        else if(s=="ZDRAVSTVUJTE"){
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        }
        else if(s=="#"){
            break;
        }
        else{
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
        i++;
    }
}
