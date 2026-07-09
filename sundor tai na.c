#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    vector<int> ara(n-1);
    long long sum=0;
    long long ans= (n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>ara[i];
    }
    for(int i=0;i<n-1;i++){
       sum+= ara[i];
    }
    long long b= ans- sum;
    cout<<b;
}
