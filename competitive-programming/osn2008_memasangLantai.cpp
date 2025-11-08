#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e6;
ll petak(ll N){
vector<ll> dp(N+1, 0);
dp[0] = 1; //ga mengisi apa-apa termasuk 1 cara
for (int i=1; i<=N; i++){
    ll petak1x3 = dp[i-3], petak3x1 = dp[i-1];
    // base case: dp[1] = 1;
    if (i == 1) dp[i] == 1;
    dp[i] = (petak3x1 + (i-3 < 0 ? 0 : petak1x3)) % mod;
}
    return dp[N];
}
signed main() {
	int N; cin>>N;
    cout << petak(N);
}
