/*
    https://codeforces.com/gym/106125/problem/J
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    string prev = "";
    vector<string> ans;
    bool flag =true;

    for (int i=0;i<n;i++) {
        int p; cin>>p;
        vector<string>v(p);
        for (int j=0;j<p;j++) {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        string chosen ="";
        for(int j=0;j<p;j++){
            if (v[j]>=prev){
                chosen = v[j]; break;
            }
        }
        if (chosen.empty()) {
            flag = false; break;
        }
        prev = chosen;
        ans.push_back(chosen);
    }

    if(!flag){
        cout << "impossible\n";
    }else{
        for (string s : ans) {
            cout << s << "\n";
        }
    }
    return 0;
}
