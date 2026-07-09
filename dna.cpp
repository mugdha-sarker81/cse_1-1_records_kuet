#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int ans=0,sum= a+b+c;
        if(a>b && a>c){
            swap(a,c);
        }else if(b>c&& b>>a){
            swap(b,c);
        }
        if(a>b){
            swap(a,b);
        }
        
        if(sum%2==1){
            cout<<"-1"<<endl;
        }else{
            if(a+b>c){
                ans+= (a+b-c)/2; a-=ans; b-=ans;
            }
            ans+=a+b; 
            cout<<ans<<endl;
        }
    }
    return 0;
}
