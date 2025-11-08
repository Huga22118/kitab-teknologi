#include <bits/stdc++.h>
#define ll long long
using namespace std; 
signed main(){
    ll q; cin>>q;
    while(q--){
        ll x; cin>>x;
        ll a = -1;
        ll idx = 2;
        while (idx<x){
            if (__gcd(idx,x) == 1) {a = idx; break;}
            idx++;
        }
        ll maxi = x-1;
        ll ans = maxi-a;
        cout << ans << '\n';
    }
}