#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll> v(N)
signed main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll N; cin>> N; vec;
    for (int i=0; i<N; i++)cin>>v[i];sort(v.begin(),v.end());
    ll query;cin>>query;while(query--){
        ll question1, question2;cin>>question1 >> question2;
        auto lower = lower_bound(v.begin(),v.end(), question1) - v.begin();
        auto upper = upper_bound(v.begin(),v.end(), question2) - v.begin();
        //lower_bound and upper_bound at its finest. -Huga
        cout << upper-lower << '\n';
    }
}
