#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll ex(ll x, ll y, ll mod){
if (y==0) return 1;
if (y == 1) return x;
ll temp = ex(x,y/2, mod);
temp = (1ll * temp * temp) % mod;
if (!(y&1)) return temp;
return (temp *x * 1ll) % mod;
}
signed main(){
    ll N, Y, mods; cin>>N>>Y>>mods;
    ll result = ex(N,Y,mods);
    cout << result <<'\n';
}