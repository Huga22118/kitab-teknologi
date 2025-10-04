#include <bits/stdc++.h>
using namespace std;
int lcs(string x, string y){
    int k = x.size(), s = y.size();
    vector<vector<int>> dp(s+1, vector<int>(k+1, 0));
    for (int i=1; i<=s;i++){
        for (int j=1; j<=k; j++){
            dp[i][j] = x[j-1] != y[i-1] ? max(dp[i][j-1], dp[i-1][j]) : dp[i-1][j-1] + 1;
        }
    }
    return dp[s][k];
}
int main(){
    string x,y; cin >> x>>y;
    int ans = lcs(x,y);
    cout << ans << '\n';
}