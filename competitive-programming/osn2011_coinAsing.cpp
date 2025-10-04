#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairme pair<char, pair<ll,ll>>
#define fi first
#define se second
int main() {
    string s;cin>>s;
    vector<pairme> ok(26, {'\0', {0, -1}});
    for (ll i=0;i<8;i++)
    {
        int a = (isupper(s[i]) ? s[i] - 'A' : s[i] - 'a');
        ok[a].se.fi++;
        if (ok[a].se.se == -1) ok[a].se.se = i;
        if(ok[a].fi == '\0') ok[a].fi = s[i];
    }
    sort(ok.begin(), ok.end(), [](const pairme a, const pairme b){
       return a.se.fi > b.se.fi; 
    });
    cout << ok[1].se.se + 1 << '\n';
}