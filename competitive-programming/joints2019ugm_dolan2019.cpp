#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    bool found = false, semiFound = false;
    int N, R,C; cin>>N>>R>>C;
    if (C<N) {
        cout << "BALIK AJA" << '\n';
        return 0;
    }
    vector<string> text(R);
    string check = "";
    check.append(N, 'O');
    for (int i=0; i<R; i++){
       cin >> text[i];
       int res = -1;
       while ((res = text[i].find(check, res+1)) != string::npos) {
           int lastpos = res+N-1;
           if (text[i].size() -1 > N-1){
              if (text[i][res-1] != 'P' && text[i][lastpos+1] != 'P'){
                found = true;
                break;
              }
              else semiFound = true;
          }
           else if (text[i].size()-1 == N-1) {found = true; break;}
       }
    }
    if (found) cout << "SENANG" << '\n';
    else if (semiFound) cout << "TERPAKSA" << '\n';
    else cout << "BALIK AJA" << '\n';
}
