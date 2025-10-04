// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int N;cin>>N;vector<int>v(N+1,0);
    for (int i=1; i<=N; i++)cin>> v[i];
    int x1;string s1; cin >>x1 >> s1;
    int x2; string s2; cin>>x2>>s2;
    int ans = 0, ans2 = 0;
    if (s1 == "right"){ for (int i=x1; i<=N; i++)ans += v[i];}
    else if (s1 == "left"){for (int i= x1; i>=1; i--) ans += v[i];}
    if (s2 == "right"){for (int i=x2; i<=N; i++){if (v[i] == 0) ans2++;}}
    else if (s2 == "left"){for (int i= x2; i>=1; i--) {if (v[i] == 0) ans2++;}}
    cout << ans << ' ' << ans2 << '\n';
}
