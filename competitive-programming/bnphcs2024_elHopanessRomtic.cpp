#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll N, M, L, R; cin >> N >> M >> L >> R;
    vector<string> a(N+1); a[0] = "";
    for (ll i = 1; i <= N; i++) cin >> a[i];
    for (ll i = 0;i<M;i++) a[0] += "*";
    for (ll i = L; i <= R; i++) {
       for (ll j=0; j < N; j++){
         swap(a[j][i-1], a[j+1][i-1]);
       }
    }
    for (auto &s : a) {
        cout << s << "\n";
    }
    return 0;
}