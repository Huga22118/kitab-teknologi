#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll pow(int e) {
    ll res = 1;
    for (int i = 0; i < e; i++) res *= 10;
    return res;
}
signed main() {
	ll N, pos = 0;; cin>>N;
    vector<ll>coin;
    vector<pair<ll,ll>> pairr;

    for (ll i=0;i<18; i++){
         coin.pb(1 * (ll)pow( i));
         coin.pb(2 * (ll)pow(i));
         coin.pb(5 * (ll)pow(i));
    }
    coin.pb((ll)pow(18));
    for (int i=0; i<18; i++){
        if (N/(ll)pow(i) == 0) break;
        pos++;
    }
    ll much = 0;
    pos *= 3;
    pos++;
   for (int i=pos-1; i>=0; i--){
        if (N/(ll)coin[i]==0) continue;
         if (N-(ll)coin[i] >= 0){
             int count = N/(ll)coin[i];
            N-= count * (ll)coin[i];
            much++;
             pairr.pb({(ll)coin[i], count});
         }
     }
      cout << much << "\n";
      for (auto x:pairr){cout <<(ll)x.first << " " << x.second << '\n';}
      cout << '\n';
}
// no more hardcoded answer (10^18)