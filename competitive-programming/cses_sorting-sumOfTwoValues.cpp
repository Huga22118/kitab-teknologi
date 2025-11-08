#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairme pair<ll,ll>
signed main() {
   ll N, X; cin>>N>>X; vector<pairme> a(N);
   for (ll i=0; i<N; i++){
    cin >> a[i].second;
    a[i].first = i;
   }
   sort(a.begin(), a.end(), [](pairme a, pairme b){
       return a.second < b.second;
   });
   bool found = false;
   ll left = 0, right = a.size()-1;
   while (left<right){
    if (a[left].second + a[right].second > X) right--;
    else if (a[left].second + a[right].second < X) left++;
    else {found = true; break;}
   }
   if (!found){cout << "IMPOSSIBLE" << '\n'; return 0;}
   cout << (min(a[left].first+1, a[right].first+1)) << " " << (max(a[left].first+1, a[right].first+1)) << '\n';
}