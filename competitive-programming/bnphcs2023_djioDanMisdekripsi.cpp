#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    string s; cin >>s;
    bool asterisk = false;
    string ans = "";
    for (int i =0; i<s.size(); i++){
        if (s[i] == '*'){
            asterisk = !asterisk;
            continue;
        }
        if (!asterisk)ans += s[i];
    }
    cout << ans;
}