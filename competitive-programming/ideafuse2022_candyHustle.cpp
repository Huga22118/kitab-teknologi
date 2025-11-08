#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll T, index = 1; cin >> T;
    while (T--){
        ll N, tot = 0, steal = 0, count = 0; cin>>N; vector<ll> can(N);
        for (ll i = 0; i<N; i++){cin>>can[i]; tot+= can[i];}
        sort(can.begin(), can.end(), greater<ll>());
        for (int i=0; i<N; i++){
            steal += can[i]; tot -= can[i];count++;
            if (steal >= tot) break;
        }
        cout << "Case #" << index << ": " << count << '\n';
        index++;
    }
}
