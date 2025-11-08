#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;cin>>T;
    int index = 1;
    while (T--){
        int N,M, maxed = 1e5; cin >> N >> M;
        vector<int> nampungMinimum(N);
        for (int i=0; i<N; i++){
            int x, temp = maxed;
            for (int j = 0; j<M; j++){
               cin>> x; temp = min(temp, x);
            }
            nampungMinimum[i] = temp;
        }
        sort(nampungMinimum.begin(), nampungMinimum.end());
        cout << "Case #" << index << ": "<<nampungMinimum[N-1] << '\n';
        index++;
    }
}
