#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K;cin>>N>>K;
    map<int,int> f;
    map<int,int,greater<int>> g;
    int q = N;
    for (int i=1; i<=K; i++) f[i] = 0;
    while (q--){
        int x; cin>>x;
        for (int i=0; i<x;i++){
            int y; cin>>y;
            f[y]++;
        }
    }
    for (auto [k,v] : f){
        g[v]++;
    }
    auto hi = g.begin();
    cout << hi->second << '\n';
}