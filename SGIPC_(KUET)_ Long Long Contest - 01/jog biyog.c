#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ro; cin>>ro;
    vector<int>ara(ro.size(),0);
    int idx=0;
    for(int i=0;i<ro.size();i++){
        if(ro[i]=='|'){
            idx++;
        }else{
            ara[idx]++;
        }
    }
    for(int i=0;i<ro.size();i++){
        if(ara[i]>0){
            cout<<ara[i]<<" ";
        }
    }
    return 0;
}
