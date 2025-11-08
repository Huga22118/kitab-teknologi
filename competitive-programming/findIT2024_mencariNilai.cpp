#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ll N,R,K,tot=0;cin>>N>>R>>K;vector<ll>bobot(N);
    for(ll i=0;i<N;i++)cin>>bobot[i];
    for (ll i=0;i<N;i++){ll x;cin>>x; tot += x * bobot[i]/100;};
    cout <<(tot>=R ? "PASS" : "NOT PASS");
}
