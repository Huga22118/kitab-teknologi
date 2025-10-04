#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool che(vector<ll> arr, ll batas, ll C){
    ll cur = 1, las = 0;
    for (ll i=1; i<arr.size(); i++){
        if (arr[i] - arr[las] >= batas){
            cur++;
            las = i;
        }
    }
    return cur >= C;
}
signed main(){
    ll q; cin>>q;
    while (q--){
    ll N,C, maxi = -1; cin>> N>> C;
    vector<ll> barns(N);
    for (ll i=0; i<N; i++)
    { 
       cin >> barns[i]; 
       maxi = max(maxi, barns[i]);
    }
    sort(barns.begin(), barns.end());
    ll l = 0, r = maxi;
    ll ans = 0;
    while (l<=r){
        ll mid = (l+r)/2;
        if (che(barns,mid,C)){
        l = mid+1;
        ans = max(ans, mid);
        }
        else{
            r = mid-1;
        }
    }
    cout << ans << '\n';
    }

}