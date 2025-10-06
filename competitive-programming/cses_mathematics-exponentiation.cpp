#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll MOD = 1e9+7;
//belajar fast exponentiation dengan bitwise
ll multiple(ll a, ll b){
    if (b == 0)return 1;
    ll ret = multiple(a, b>>1);//ultra bitshift ygy.
    ret = (ret*ret) %MOD;
    if(b&1) ret = (ret * a) % MOD;
    return ret%MOD;
}
signed main() {
	ll N;cin>>N;
	while (N--){
        ll x,y; cin>>x>>y;
        cout << multiple(x,y)<<'\n';
    }
}
