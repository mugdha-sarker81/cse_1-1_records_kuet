#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>ara(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    long long ans=0;
    for(int i=0;i<n-1;i++){
        if(ara[i+1]<ara[i]){
            ans+= ara[i]-ara[i+1];
            ara[i+1]=ara[i];
        }
    }
    cout<<ans;
    return 0;
}
