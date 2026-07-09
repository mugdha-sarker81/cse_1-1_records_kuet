#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    vector<int > ara(n),sum(n+1,0);
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum[i+1]= sum[i]+ara[i];
    }
    int max,min=INT_MAX,ans;
    for(int i=0;i+k<=n;i++){
        max= sum[i+k]-sum[i];
        if(max<min){
            min=max;
            ans=i+1;
        }
    }
    cout<<ans;
    return 0;
}
