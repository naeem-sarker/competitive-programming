#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/443/problemA

void slv() {
    set<char> s;

    while(1) {
        char ch;
        cin >> ch;

        if(ch>='a' && ch<='z') {
            s.insert(ch);
        }

        if(ch == '}') {
            break;
        }
    }

    cout << s.size() << "\n";
}

int main() {
    slv();
}
