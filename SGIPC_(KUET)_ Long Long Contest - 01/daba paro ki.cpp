#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    multiset<int>tic;
    for(int i =0; i<n;i++) {
        int h; cin>>h;
        tic.insert(h);
    }
    for(int i = 0; i < m; i++) {
        int t; cin >> t;
        auto it = tic.upper_bound(t);
        if(it != tic.begin()) {
            --it;
            cout << *it << '\n';
            tic.erase(it);
        } else {
            cout <<"-1\n";
        }
    }
    return 0;
}
