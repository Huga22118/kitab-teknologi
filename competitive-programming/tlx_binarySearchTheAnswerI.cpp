#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool che(ll ar[], ll arrsize, ll M, double mid){
     ll c = 0;
     for (ll i=0; i<arrsize; i++){
        double temp = ceil(ar[i]/mid);
        c+=temp;
     }
     return c<=M;
}

signed main(){
ll N,M, maxi = 0; cin>>N>>M;
ll ar[N];
for (ll i=0; i<N; i++){cin>>ar[i]; maxi = max(maxi,ar[i]);}
double l = 0, r= (double)maxi;
double ans = -1.0;
for (ll i=1; i<=100; i++){ //100 iterations is more than enough so yes am pro 😎
    double mid = (l+r)/2.0;
    if (che(ar, N, M, mid)){
       ans = mid;
       r = mid;
    }
    else l = mid;
}
cout << fixed << setprecision(2) << ans << '\n';
}