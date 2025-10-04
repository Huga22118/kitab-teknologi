// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define pairme pair<int, int> v[N]
int draw(int &n){return n+=1;}
int win(int& n){return n+=3;}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int N, ans=0;; cin>>N; pairme;
    for (int i=0; i<N; i++)cin >> v[i].first;
    for (int i=0; i<N; i++)cin >> v[i].second;
    for (auto x:v){
        if (x.first>x.second) win(ans);else if (x.first==x.second) draw(ans);}
    cout << ans;

}
