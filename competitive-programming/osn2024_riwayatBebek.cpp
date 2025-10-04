#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ll N; cin>>N; 
    ll kecik = 200001, besar = 0;
    double total = 0;
    for (ll i =1; i<=N; i++){
        ll x; cin >> x;
        kecik+= 1;
        besar+= 1;
        total += x + (i-1);
        kecik = min(kecik, x);
        besar = max(besar,x);
        printf("%d %d %.4lf\n", kecik, besar, total/i);
    }

}