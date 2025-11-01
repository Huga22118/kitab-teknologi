#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K; cin>>N>>K;
    for (K; K>0; K--){
        if (!(N%10)){
            N/=10; continue;
        }
        N--;
    }
    cout << N;
}