#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairme pair<ll, ll>
#define fi first
#define se second
bool djowen(const pairme a, const pairme b){return (a.fi - a.se) > (b.fi - b.se);}
bool djonathan(const pairme a, const pairme b){return (a.fi - a.se) < (b.fi - b.se);}
int main(){
    int N, X; cin >> N >> X; vector<pairme> lp(N);
    for (int i = 1; i<=N*2; i++){if (i<=N) cin >> lp[i-1].fi;
    else cin >> lp[(i%N == 0 ? N-1 : i%N -1)].se;}
    sort(lp.begin(), lp.end(), djowen);ll djowenCount = 0;
    for (int i=0; i<X; i++)djowenCount += lp[i].fi;
    for (int i=X; i<N; i++)djowenCount += max(lp[i].fi, lp[i].se);
    sort(lp.begin(), lp.end(), djonathan);ll djonathanCount = 0;
    for (int i=0; i<X; i++) djonathanCount += lp[i].fi;
    for (int i=X; i<N; i++) djonathanCount += min(lp[i].fi , lp[i].se);
    cout << abs(djowenCount - djonathanCount);
}