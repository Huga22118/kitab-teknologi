#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, tot = INT_MIN; cin >> n;
    while (n--){
        int a,b; cin >> a >> b;
        tot = max(tot, a*b);
    }
    cout << tot << '\n';
}
