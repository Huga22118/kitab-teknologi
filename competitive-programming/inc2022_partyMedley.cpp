#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie();
int N, M; cin>>N>>M; vector<int>contestant(N);for(int i=0;i<N;i++)cin>>contestant[i];
int rating = -1, count = 0;
for (int i=0;i<N-2; i++){
    for (int j=i+1; j<N-1; j++){
        for (int k = j+1; k<N; k++){
            if (max(contestant[i], max(contestant[j], contestant[k])) - min(contestant[i], min(contestant[j], contestant[k])) <= M){
               count++;
               rating = max(rating, (contestant[i] + contestant[j] + contestant[k]));
            }
        }
    }
}	
if (count ==0) cout << -1 << '\n';
else cout << count << " " << rating;
}
