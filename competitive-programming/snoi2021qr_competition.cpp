#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
signed main(){
ll N,A,B, ans = 0; cin >>N>>A>>B;
vector<ll> a(N),b(N);
vector<pair<ll,ll>> sel(N);
for (ll i=1; i<=N*2; i++){
    if (i>N){
        ll idx = i==N*2 ? N-1 : i%N-1;
        cin >> b[idx]; 
        sel[idx].fi = a[idx]-b[idx];
        sel[idx].se = idx;
        continue;
    }
    cin >> a[i-1];
}
sort(sel.rbegin(), sel.rend());
for (ll i=0; i<N; i++) ans += (i<A ? a[sel[i].se] : b[sel[i].se]);
cout << ans;
}