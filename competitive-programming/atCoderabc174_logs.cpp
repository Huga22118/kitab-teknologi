#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool che(vector<ll>arr, double mid, ll K){
    ll tot = 0;
    for (ll i=0; i<arr.size(); i++){
        ll pcs = ceil(arr[i]/mid);
        ll pot = pcs-1;
        tot+=pot;
    }
    return tot <=K;
}
signed main(){
    ll N,K, maxi = 0; cin>>N>>K;
    vector<ll>a(N);
    for (ll i=0; i<N;i++){cin>>a[i]; maxi = max(maxi, a[i]);}
    sort(a.begin(), a.end());
    double l = 1.0, r= (double)maxi, temp = -1.0;
    for (ll i=0; i<100;i++){
       double mid = (l+r)/2.0;
       if (che(a, mid, K)){
       temp = mid;
       r = mid;
       }
       else l = mid;
    }
    ll ans = ceil(temp);
    cout << ans;
}