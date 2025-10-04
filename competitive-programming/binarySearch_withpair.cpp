#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairme pair<ll,ll>
signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll N; cin>>N; pairme a[N];
    for (ll i=0; i<N; i++){cin >> a[i].first; a[i].second = i;} 
    sort(a, a+N);
    ll query;cin>>query; while (query--){
        ll left = 0, right = N-1,  x, ans=-1; cin>> x;
        while (left<=right){
            ll mid = left+(right-left)/2;
            if (a[mid].first == x){ans = a[mid].second; right = mid-1;}
            else if (a[mid].first>x)right = mid-1;
            else left =mid+1;
        }
        cout << ans << '\n';
    }
}
