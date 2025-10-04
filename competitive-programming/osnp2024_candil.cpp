// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int count =0;
    ll B, C,D; cin>> B >> C >> D; vector<ll> factors;
    ll SelisihCD = C-D;
    if (SelisihCD !=0){
    for (int i=1; i<=sqrt(SelisihCD); i++){
        if (SelisihCD%i ==0){
            factors.push_back(i);
            if (i != SelisihCD/i) factors.push_back(SelisihCD/i);
        }
    }
    }
    else{
        if (D<0 || D>B) {cout << count << '\n'; return 0;}
        if (C-D == 0) {
            if (D==0) cout << B;
            else cout << B-C;
            return 0;}
        }
    for (auto i:factors){
        if (i<=B && C%i==D) count++;
    }
    cout << count;
}
