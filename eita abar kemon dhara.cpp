#include<bits/stdc++.h>
using namespace std;

int main()
{
    string dna; cin>>dna;
    char now= dna[0];
    int cnt=1,max=1;
    for(int i=1;i<dna.size();i++){
        if(dna[i]==now){
            cnt++;
            if(cnt>max){
                max=cnt;
            } 
        }else{
            now= dna[i]; cnt=1;
        }
    }
    cout<<max;
    return 0;
}
