/*
      https://codeforces.com/gym/106125/problem/K
*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,j ; cin>>i>>j;
    if(i<j) cout<<i+1;
    else if(i==j) cout<<i;
    else cout<<0;
    return 0;
}
