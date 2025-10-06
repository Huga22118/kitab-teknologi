#include <bits/stdc++.h>
using namespace std;
enum emi{
   PB, PF, PPB, PPF
};
int main(){
    int N;cin>>N; deque<int> myDeque;
    map<string, emi> cmds;
    cmds["push_back"] = PB;
    cmds["push_front"] = PF;
    cmds["pop_back"] = PPB;
    cmds["pop_front"] = PPF;
    for (int i=0 ;i<N; i++){
    string x; int y; cin >> x;
    emi cmd;
    auto it = cmds.find(x);
    if (it != cmds.end()){
        cmd = it->second;
    }
    switch (cmd){
        case PB:
        cin >> y;
        myDeque.push_back(y);
        break;
        case PF:
        cin >> y;
        myDeque.push_front(y);
        break;
        case PPB:
        myDeque.pop_back();
        break;
        case PPF:
        myDeque.pop_front();
        break;
    }
    }
    for (auto& c:myDeque) cout << c << '\n';
}