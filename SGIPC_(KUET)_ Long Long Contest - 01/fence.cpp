#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    int t,i=1; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll k= ceil(sqrt(n)) ;
        ll base= (k-1)*(k-1);
        ll dis= n-base;
        ll l,r;
        if(k%2==0){
            if(dis>k){
                l=k;
                r=k*2-dis;
            }else{
                l=dis;
                r=k;
            }            
        }else{
            if(dis>k){
                l=k*2-dis;
                r=k;
            }else{
                l=k;
                r=dis;
            }
        }
        cout<<"Case "<<i++<<": "<<l<<" "<<r<<endl;

    }
}
