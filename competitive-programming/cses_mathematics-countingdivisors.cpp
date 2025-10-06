
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll divisors(ll x){
    ll count = 1; //ofcors
    if (x%2==0){
        ll exp = 0;
        while (x%2==0){
            exp++;
            x>>=1;
        }
        count *= (exp+1);
    }
    for (ll i=3; i<=sqrt(x); i+=2){
        if (x%i==0){
        ll exp = 0;
        while (x%i ==0){
            exp++;
            x/=i;
        }
        count *= (exp+1);
        }
    }
    if (x>1) count *= 2;
return count;
}
signed main() {
	ll N; cin>>N;
    while (N--){
        ll x; cin>>x;
        cout << divisors(x) <<'\n';
    }
}
