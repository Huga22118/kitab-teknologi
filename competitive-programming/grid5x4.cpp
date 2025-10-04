#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    vector<string> grid = { 
    "..*..",
    "...*.",
    "....*",
    ".**.."
    };/*
    for (auto x:grid){
        cout << x << '\n';
    }*/
    int N = grid.size(),  M = grid[0].size();
    vector<vector<ll>> dp(N,vector<ll>(M,0));
    for (ll i=0; i<N; i++){
        if (grid[i][0] == '*') break;
        dp[i][0] = 1;
    }
    for (ll i=0; i<M; i++){
        if (grid[0][i] == '*') break;
        dp[0][i] = 1;
    }
    for (ll i=1;i<N;i++){
        for (ll j = 1;j<M;j++){
            if (grid[i][j] == '*')continue;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[N-1][M-1];
    return 0;
}