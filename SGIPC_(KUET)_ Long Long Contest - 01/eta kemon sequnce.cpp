#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; 
    while(t--)
    {
        int n; cin>>n;
        int sum=0;
        while(n){
            int dig= n%10;
            n/=10;
            sum+= dig;
        }
        cout<<sum<<endl;
    }
    return 0;
}
