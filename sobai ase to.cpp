#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t; cin>>n>>t;
    string bg; cin>>bg;
    while(t--)
    {
        for(int i=0;i<n-1;i++){
            if(bg[i]=='B' && bg[i+1]=='G'){
                swap(bg[i],bg[i+1]); i++;
            }
        }

    }
    cout<<bg;
    return 0;
}
