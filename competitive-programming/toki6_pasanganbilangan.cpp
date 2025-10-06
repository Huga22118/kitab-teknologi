#include <bits/stdc++.h>
using namespace std;
#define ll long long
//two-pointer
bool check(ll x, vector<ll> count){
        ll N = count.size(), left=0,right=N-1;
        while (left<right){
            if (count[left] + count[right] > x) right--;
            else if (count[left] + count[right] < x)left++;
            else if (count[left] + count[right] == x){
            return true;
            }
        }
        return false;
}
signed main(){
    ll N,M; cin>>N>>M;vector<ll>count(N);for(ll i=0; i<N;i++)cin>>count[i];
    sort(count.begin(), count.end());
    while (M--){
        ll x;cin>>x;
        cout << (check(x, count) ? "YA" : "TIDAK") << '\n';
    }
}
