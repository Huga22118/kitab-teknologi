#include <bits/stdc++.h>
using namespace std;
#define pairme pair<int,int>
#define fi first
#define se second
// unique approach: using pair<>. -Huga
int main() {
	int N; cin>>N; vector<pairme> lo(1001);
    for (int i=0;i<N; i++){int x;cin>>x; lo[x].fi = x;
        lo[x].se++;
    }
    sort(lo.begin(), lo.end(), [](pairme a, pairme b){
     if (a.se != b.se) return a.se > b.se;
     return a.fi > b.fi;
    });
    cout << lo[0].fi;
}
