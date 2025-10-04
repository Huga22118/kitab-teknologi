#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();
    string s;cin>>s;
    vector<string> pola = {"OSN", "ONS", "NOS", "SNO", "SON", "NSO"};
    int maxE = 0;
    for (int i=0; i<pola.size(); i++){
        int curr = 0;
        for (int j=0; j<s.size(); j++){
            if (s[j] == pola[i][curr%3]) curr++;
        }
        if (curr >=3) maxE = max(maxE, curr);
    }
    cout << (maxE >= 3 ? maxE:-1);
}
