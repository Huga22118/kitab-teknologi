#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N; vector<int> a1(N),a2(N);
    for (int i=1; i<=N*2; i++){
        cin >> (i>N ? a2[i==N*2 ? N-1 : i%N-1] : a1[i-1]);
    }
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){
            dp[i][j] = a1[j-1] == a2[i-1] ? 1 + dp[i-1][j-1] : max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[N][N];
}