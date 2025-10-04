#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb lower_bound
signed main(){
    ll N,Q,sum=0; cin >>N>>Q;
    map<ll,ll> f;
    for (ll i=0;i<N;i++){ ll x; cin >>x; f[x]++; sum+=x;}
    cout << sum << '\n';
    while (Q--){
       ll l,r,x; cin >>l>>r>>x;
       auto it = f.lb(l);
    while (it != f.end() && it->first <= r){
        if (it->first == x){it++; continue;}
        sum -= it->first * it->second;
        sum += x * it->second;
        ll temp = it->first;
        f[x]+= it->second;
        it = f.erase(it);
    }
    cout << sum << '\n';
    }
}