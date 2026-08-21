/*
    https://codeforces.com/gym/106125/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long d,a,o,ra,ro; cin>>d>>a>>o>>ra>>ro;
    long long x,y;
    
    x= max(a-ra*d,(long long)0);
    y= max(o-ro*d,(long long)0);
    double ans;
    ans= (double)x/(x+y);
    ans= ans*100;
    printf("%.10lf",ans);
    return 0;
}
