#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    vector<string>a(N+1);
    a[0] = "";
    a[1] = "*\n";
    a[2] = "*\n**\n*\n";
    if (N == 1 || N==2){
        cout << a[N];
    }
    else{
    for (int i=3; i<=N; i++){
        string st,tex;st.append(i, '*');
        tex += a[i-1] + st + '\n' + a[i-1]; a[i] = tex;
        // we tryna compute all of the mountains above, then we print it when i equals to N
        if (i==N) cout << a[i];
    }
    }
   
}