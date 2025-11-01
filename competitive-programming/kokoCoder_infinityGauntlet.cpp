#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin>>N;
    map<string,string> def;
    def["purple"] = "Power";
    def["green"] = "Time";
    def["blue"] = "Space";
    def["orange"] = "Soul";
    def["red"] = "Reality";
    def["yellow"] = "Mind";
    for (N; N>0;N--){
      string s; cin>>s;
      def.erase(s);
    }
    cout << def.size() << '\n';
    for (auto& [k,v]: def) cout << v << '\n';
}