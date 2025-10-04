#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
    ll N; cin>>N; vector<ll> op(N);
    for (ll i=0;i<N;i++){ll x; cin>>x; op[i] = abs(x);}
    auto min_it = min_element(op.begin(),op.end());
    cout << *min_it;
}
