#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int x,y,z,n; cin>>x>>y>>z>>n;
    ll tot = (ll)ceil(0.6*x*y);                       
    ll need = tot- n;                   
    ll week= x-z;                      
    ll clas= week*y;    
    if(need<0){
        need=0;
    }
    if(need>clas){
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
        vector<int > ara(week,0);
        ll reg= need/y;
        ll rem= need%y;
        int ind= week-1;
        for(ll i=0;i<reg;i++){
            ara[ind--]=y;
        }
        if(rem>0){
            ara[ind--]= (int)rem;
        }
        for(int i=0;i<week;i++){
            cout<<ara[i]<<" ";
        }
    }
}
