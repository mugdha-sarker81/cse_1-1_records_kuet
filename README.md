#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    int t,i=1; cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        ll ans= m*(n/2);
        cout<<"Case "<<i++<<": "<<ans<<endl;
    }
    return 0;
}
