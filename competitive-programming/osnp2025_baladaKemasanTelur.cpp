#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
map<ll,ll> fac;
ll idx = LLONG_MAX;
ll fact = LLONG_MAX;
ll checks(ll n) {
    if (n <= 0) {
        return 0;
    }
    while (!(n&1)){
        fac[2]++;
        n>>=1;
    }
    for (ll i=3; i*i<=n; i+=2){
        while (!(n%i)){
            fac[i]++;
            n/=i;
        }
    }
    if (n>1) fac[n]++;
    for (auto& [k, v] : fac) {
        if (v<fact){
            fact = v;
            idx = k;
        }
    }
    return idx;
}
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll NS; cin >> NS;
    ll ans = checks(NS);
    cout << ans;
}

