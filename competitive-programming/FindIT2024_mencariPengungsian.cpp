#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll N,q; cin >>N>>q;
    vector<ll> a(N),p(N+1,0);
    for (ll i=0; i<N;i++){cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (ll i=0;i<N;i++) p[i+1] = p[i] + a[i];

    while (q--){
        ll x,y; cin>>x>>y;
        ll l = lower_bound(a.begin(), a.end(), x) -a.begin();
        ll ansL = x*l-p[l];
        ll rUpBound = upper_bound(a.begin(), a.end(), y) - a.begin();
        ll r = N-rUpBound;
        ll selisihR= p[N]-p[rUpBound];
        ll ansR = selisihR - y*r;
        cout << ansL+ansR << '\n';
        
    }
    
}