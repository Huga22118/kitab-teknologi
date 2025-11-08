#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
    ll N,M,cursum = 0;cin>>N>>M;vector<ll>prize(N);
    for (ll i=0;i<N;i++){cin>>prize[i];if (i<M) cursum += prize[i];}
    ll maxs= cursum;
    for (ll i=M;i<N;i++){
    cursum += prize[i] - prize[i-M];
    maxs = max (maxs, cursum);}
    cout << maxs;
}
