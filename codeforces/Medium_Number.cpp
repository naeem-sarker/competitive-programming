//  https://codeforces.com/contest/1760/problem/A

#include <bits/stdc++.h>
using namespace std;

#define LL long long

void slv() {
    int n=3;
    vector<int> v;

    while(n--) {
        int val;
        cin >> val;

        v.push_back(val);
    }

    sort(v.begin(), v.end());

    cout << v[1] << "\n";
}

int main() {
    int T;
    cin >> T;

    while(T--) slv();
}
