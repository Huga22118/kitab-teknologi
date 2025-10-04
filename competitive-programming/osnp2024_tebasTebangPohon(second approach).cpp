#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll N,M,tot = 0, kurang = 0;cin>>N>>M; vector<ll>gr(N);
    for (ll i=0;i<N;i++){cin>>gr[i];tot+=gr[i];}
    if (tot < M && kurang == 0){cout << -1 <<'\n'; return 0;}
    kurang = -1;
    sort(gr.begin(),gr.end());
    vector<ll> pref(N+1,0);
    ll left = 0, right = *max_element(gr.begin(), gr.end());
    for (ll i=0; i<N;i++)pref[i+1] = pref[i] + gr[i];
    while (left<=right){
        tot = 0;
        ll mid = left+(right-left)/2;
        auto it = upper_bound(gr.begin(),gr.end(), mid) - gr.begin();
        ll posIndex = N-it;
        tot = pref[N] - (mid*posIndex)- pref[it];
        if (tot>=M) {left = mid+1; kurang = mid;}
        else right = mid-1;
    }
    cout << kurang;
}
 /*
        Strategi menggunakan upper bound, Kita misalkan pilih nilai (mid) dari nilai elemen terbesar dibagi 2.
        Lalu, kita mencari nilai pohon di vector (gr) yang nilai nya > (mid) menggunakan fungsi upper_bound.
        Sesudah itu, prefix sum kita kurangkan dengan batas maksimum (mid)
        sebanyak (N - banyak elemen yang nilai pohonnya > mid) kali. Lalu, sesudah kita kurangkan dengan banyak pohon yang
        nilai nya > (mid), kita kurangkan prefix sumnya dengan prefix sum dari index (it) kebawah 
        (kurangi dengan total pohon yang tidak bisa dipangkas). Lalu, kita bandingkan apakah (total) nya >= (M). 
        Jika iya maka, kita cari solusi lain apabila memang ada solusi lain yang nilai nya lebih kecil 
        tapi masih lebih dari sama dengan (M) dengan cara (left = mid+1), simpan kandidat jawaban akhir (kurang = mid).
        Jika tidak maka kita potong nya terlalu tinggi dan kita perlu kurangi batas maks pangkas pohonnya
        dengan cara (right = mid-1).
        */