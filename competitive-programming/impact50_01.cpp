#include <bits/stdc++.h>
#define ll long long
using namespace std;
signed main(){
    ll q; cin>>q;
    while (q--){
        ll x; cin>>x;
        cout << (x&1 ? "YA" : "TIDAK") << '\n';
    }
}