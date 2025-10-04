#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairme pair<ll,ll>
#define fi first
#define se second
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll N,M; cin>>N>>M; vector<pairme> treas(N);
    for (ll i=0;i<N;i++) cin>>treas[i].fi>>treas[i].se;
    sort(treas.begin(), treas.end(), [](const pairme a, const pairme b){
    if (a.fi == b.fi) return a.se > b.se;
    return a.fi < b.fi;
    });
    vector<ll> carts(M);
    for (ll i=0;i<M;i++) cin>>carts[i];
    sort(carts.begin(), carts.end());
    ll idx = 0, total = 0;
    priority_queue<ll> heap;
    for (auto&cap:carts){
        while (idx<N && treas[idx].fi <= cap){
            heap.push(treas[idx].se);
            idx++;
        }
        if (!heap.empty()){
            total += heap.top();
            heap.pop();
        }
    }
    
    cout << total;
}
