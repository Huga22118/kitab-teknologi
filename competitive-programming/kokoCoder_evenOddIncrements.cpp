#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    for (t; t>0; t--){

        ll N,Q; cin>>N>>Q;
        ll countE = 0, sumE = 0, countO = 0, sumO = 0;
        for (ll i=0;i<N;i++){
            ll x; cin>>x;
            if (!(x&1)) {countE++; sumE+=x;}
            else {countO++; sumO+=x;}
        }
        for (Q;Q>0;Q--){
            ll z1,x; cin>>z1>>x;
            if (!z1){
                if (!(x&1)){
                sumE+= countE * x;
                }
                else{
                sumE+= countE * x;
                sumO += sumE;
                countO += countE;
                sumE = 0; countE = 0;
                }
            }
            else if (z1==1){
                if (!(x&1)){
                    sumO += countO*x;
                }
                else{
                    sumO += countO*x;
                    sumE += sumO;
                    countE += countO;
                    sumO = 0;countO = 0;
                }
            }
            cout << sumE+sumO << '\n';
    }
}
}