#include <bits/stdc++.h>
#define ll long long 
#define pairme pair<ll,ll>
#define pb push_back
#define pq priority_queue
#define fi first
#define se second
#define pu push
using namespace std;
signed main(){
    ll q,r; cin>>q;
    vector<pairme> a;
    r = q;
    while(q--){
        ll x,y; cin>>x>>y;
        a.pb({x,y});
    }
    pq<ll> y;
    sort(a.begin(),a.end(), [](const auto& a, const auto& b){
        if (a.fi == b.fi) return a.se > b.se;
        return a.fi > b.fi;
    });
    ll idxStart = a[0].fi, yuh=0, ans = 0;
    for (ll i=idxStart; i>=1; i--){
        while (a[yuh].fi == i && yuh<r){
            y.pu(a[yuh].se);
            yuh++;
        }
        if (!y.empty()){
            ans += y.top();
            y.pop();
        }
    }
    cout << ans <<'\n';
}