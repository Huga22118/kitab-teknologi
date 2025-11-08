#include <bits/stdc++.h>
#define ll long long
using namespace std;
signed main(){
    double minimum = INT_MAX, before = INT_MAX;
    ll N; cin>>N;
    ll indexes = 0;
    for (ll i=0; i<N; i++){
        double x,y; cin>>x>>y;
        double maxi = y/x;
       if (maxi < minimum){
        minimum = maxi;
        indexes = i+1;
       }
    }
    cout << indexes << '\n';
}