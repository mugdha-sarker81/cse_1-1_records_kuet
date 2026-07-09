#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    map<int,ll>ara;
    int t; cin>>t;
    int sum=0,max=0;
    while(t--){
        int a,b; cin>>a>>b;
        ara[a-1]++; ara[b]--;
    }
    for(auto it: ara){
        sum+=it.second;
        if(sum>max){
            max= sum;
        }
    }
    cout<<max;
    return 0;
}
