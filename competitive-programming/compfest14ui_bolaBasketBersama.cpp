#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ll N, D; cin>> N >> D;
    vector<ll> a(N); for (ll i=0;i<N;i++) cin>>a[i];
    ll kepakai = 0, tim = 0;
    sort(a.begin(), a.end(), greater<ll>());
    for (ll i=0; i<N; i++){
        ll used = D/a[i]+1;
        if (used<=N-kepakai){
            kepakai += used;
            tim++;
        }
        else break;
    }
    cout << tim << "\n";
}