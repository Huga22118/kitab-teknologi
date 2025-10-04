#include "bits/stdc++.h"
using namespace std;
#define ll long long
signed main()
{
    ll N,M,tot =0, kurang=0; cin>>N>>M; vector<ll> gr(N);
    for (ll i=0;i<N;i++){
        cin >> gr[i];
        tot+=gr[i];
    }
    if (tot < M && kurang==0)
    {
        //gausah cape cape, kalau emg nilai prefix sum lebih kecil dari M,
        //otomatis nilai yang dikurang dengan batas maximum < nilai total murni.
        cout << -1 <<'\n'; return 0;
   }
    sort(gr.begin(),gr.end());
    kurang = -1;
    ll left = 0, right = *max_element(gr.begin(), gr.end());
    while (left<=right){
        ll mid = left + (right-left)/2;
        tot = 0;
        for (auto &v:gr){
            if (v>mid){
                tot += v-mid;
            }
        }
        if (tot >= M) {kurang = mid; left = mid+1;}
        else right = mid-1;
    }
    cout << kurang;
}
