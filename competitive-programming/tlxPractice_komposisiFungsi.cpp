#include <bits/stdc++.h>
using namespace std;

long long fastPower(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int main(){
    int A,B,x,K; cin >> A >> B >> K >> x;
    int ans =0;
    if (A==1)  ans = A*x+B;
    else{
        int ak = fastPower(A,K);
        int geo = (ak-1)/(A-1);
        ans = abs(ak*x+geo*B);
    }
    
    cout << abs(ans) << '\n';
}
