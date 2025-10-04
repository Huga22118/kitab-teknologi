#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isTwoPower(ll x){
    return (x && !(x & (x-1)));
}
signed main(){
    ll N,K; cin>>N>>K;
    map<ll,ll, greater<ll>> f;
    for (ll i = 0; i<N; i++){
        ll x; cin>>x;
        if (isTwoPower(x)){
            f[1] += x;
            continue;
        }
         if (!(x&1)){
            ll cnt = 0;
            while (!(x&1)){
             cnt++;
             x>>=1;
            }
            f[x] += 1<<cnt;
            continue;
        }
        //cout << f[x] << '\n';
        f[x]++;
    }
    map<ll,ll>::iterator i = f.begin();
    ll ans = 0;
    while (i != f.end() && K){
        ll need = min(K, i->second);
        K -= need;
        ans += i->first * need;
        i++;
    }
    cout << ans;
}