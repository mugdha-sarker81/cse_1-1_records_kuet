/*
  https://codeforces.com/gym/106125/problem/D
*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a; cin>>a;
    vector<int > v(26,0);
    for(char c: a){
        v[c-'a']++;
    }
    int cnt=0;
    for(int b:v){
        if(b%2==1) cnt++;
    }
 
    if(cnt==1 || cnt==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
