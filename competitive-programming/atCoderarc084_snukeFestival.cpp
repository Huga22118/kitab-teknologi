#include <bits/stdc++.h>
#define ll long long
using namespace std;
signed main(){
    ll N; cin>>N; vector<ll> a(N),b(N),c(N);
    for (ll i=0; i<N; i++) cin>>a[i];
    for (ll i=0; i<N; i++) cin>>b[i];
    for (ll i=0; i<N; i++) cin>>c[i];
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    ll ans = 0;
    for (ll i=0; i<N;i++){
        ll cd = b[i];
        ll aCnt;
        auto aPos = lower_bound(a.begin(),a.end(),cd);
        aCnt = distance(a.begin(), aPos);

        auto cPos = upper_bound(c.begin(),c.end(), cd);
        ll cTemp = distance(c.begin(), cPos);
        ll cCnt = c.size()-cTemp;
        ans += aCnt*cCnt;
    }
    cout << ans;
}