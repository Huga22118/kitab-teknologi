#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ll N, Q; cin >> N >> Q;
    set<ll> a;
    map<ll,ll> f;
    ll ans = 0;
 for (ll i=0; i<N; i++){
    ll x; cin>>x; ans += x;
    a.insert(x);
    f[x]++;
 }   
 cout << ans << '\n';
  while (Q--){
    ll l,r,x; cin >> l >> r >> x;
    auto it = a.lower_bound(l);
    ll replacement = 0;
    while (it != a.end() && r >= *it){
        ll val = *it;
        ans -= val * f[val];
        it++;
        replacement += f[val];
        a.erase(val);
        f[val] = 0;

    }
    ans -= f[x] * x;
    f[x] += replacement;
    ans += x*replacement;
    cout << ans << '\n';
  }
}