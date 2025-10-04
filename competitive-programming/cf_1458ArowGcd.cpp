#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    ll n,m; cin>>n>>m;
    vector<ll>yuh(n),b(m),ans;for(ll i=0;i<n;i++)cin>>yuh[i];for(ll i=0;i<m;i++)cin>>b[i];
    ll rep;sort(yuh.begin(), yuh.end());
    for (ll i=1;i<n;i++){yuh[i] -= yuh[0];if (i==1)rep = yuh[i]; else if (i>1)rep = __gcd(rep,yuh[i]);}
    for (ll i=0; i<m; i++){ll query = yuh[0]+b[i];ll temp = __gcd(query, rep); ans.push_back(temp);}
    for (auto& c:ans) cout << c << " ";

}