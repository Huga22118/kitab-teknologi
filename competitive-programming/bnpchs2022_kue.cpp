#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio();cin.tie(0);
    int N,M, ans=0; cin >> N >> M; vector<int> kue(N+1,0);
    for (int i=0; i<M; i++){int x; cin>>x; kue[x]++;}
    for (auto x:kue){ ans += (x%4 == 2 || x%4 == 3 ? 1 : 0);}
    cout << ans;
}
