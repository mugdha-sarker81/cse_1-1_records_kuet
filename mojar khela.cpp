#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    string neymar; cin>>neymar;
    int a=0,b=0;
    for(int i=0;i<neymar.size();i+=2){
        if(neymar[i]=='A'){
            a+= neymar[i+1]-'0';
        }else{
            b+= neymar[i+1]-'0';
        }
    }
    if(a>b){
        cout<<"A";
    }else{
        cout<<"B";
    }
}
