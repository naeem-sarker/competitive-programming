//  https://codeforces.com/contest/1335/problem/A

#include <bits/stdc++.h>
using namespace std;

#define LL long long

void slv() {
    LL n;
    cin >> n;

    if(n==1 && n==2) {
        cout << "0" << "\n";
    } else if(n%2==0) {
        cout << (n/2) - 1 << "\n";
    } else {
        cout << (n/2) << "\n";
    }
}

int main() {
    int T;
    cin >> T;

    while(T--) slv();
}
