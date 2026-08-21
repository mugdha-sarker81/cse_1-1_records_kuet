/*
    https://www.codechef.com/problems/HORSES
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int min=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            int dis= abs(v[i]-v[i+1]);
            if(dis<min){
                min= dis;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
