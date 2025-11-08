#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;cin>>N;vector<int> a(N);
    for (int i=0;i<N;i++) cin>>a[i];
    int res = *min_element(a.begin(), a.end());
    int res1 = *max_element(a.begin(), a.end());
    int ans = (res + res1)/2;
    cout << ans << '\n';
}