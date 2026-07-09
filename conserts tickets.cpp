#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    int t; cin>>t; 
    cin.ignore();
    while(t--)
    {
        string bra; getline(cin,bra);
        if(bra.empty()){
            cout<<"Yes\n"; continue;
        }
        stack<char> bro;
        bool ck=true;
        for(int i=0;i<bra.size();i++){
            if(bra[i]=='(' || bra[i]=='['){
                bro.push(bra[i]);
            }else if( bra[i]==']'){
                if(!bro.empty()&& bro.top()=='['){
                    bro.pop();
                }else{
                    ck= false; break;
                }
            }else if(bra[i]==')'){
                if(!bro.empty()&& bro.top()=='('){
                    bro.pop();
                }else{
                    ck= false; break;
                }
            }

        }

        if(ck && bro.empty()){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
