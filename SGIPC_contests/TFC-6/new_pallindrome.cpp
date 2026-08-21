/*
    https://codeforces.com/problemset/problem/1832/A
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    while(n--){
        string s,a,b; cin>>s;
        a=s;
        if(s.size()<=3){
            cout<<"NO"<<endl; continue;
        }
        int len= s.size();
        bool flag=false;
        for(int i=0;i<(len/2)-1;i++){
            swap(a[i],a[i+1]); swap(a[len-1-i],a[len-2-i]);
            b=a; reverse(a.begin(),a.end());
            if(a==b && a!=s){
                flag=true; break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}
