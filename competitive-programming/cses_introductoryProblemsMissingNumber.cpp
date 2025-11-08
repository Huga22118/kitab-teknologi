#include <bits/stdc++.h>
#define ll long long
using namespace std;
signed main(){
    ll N; cin>>N;
    ll mins = 2*(1e5+1);
    ll maxi = 0;
    ll tot = (N*(N+1))/2;
    vector<ll> num(N-1);
    for (ll i=0;i<N-1;i++){
        cin >> num[i];
        maxi+=num[i];
    }
    ll ans = tot-maxi;
    cout << ans;
}
