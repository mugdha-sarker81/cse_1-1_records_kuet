#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,q; cin>>n>>q;
        vector<int>ara(n);
        vector<long long> sum(n+1);        sum[0]=0;      
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum[i+1]= sum[i] + ara[i];
        }
        while(q--)
        {
            ll l,r,k; cin>>l>>r>>k;
            ll ans = sum[n]-sum[r]+sum[l-1]+(r-l+1)*k;
            if(ans%2==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
