//  https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>
using namespace std;

void slv() {
    int n, res=0;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;

        if(str=="Tetrahedron") {
            res+=4;
        } else if(str=="Cube") {
            res+=6;
        } else if(str=="Octahedron") {
            res+=8;
        } else if(str=="Dodecahedron") {
            res+=12;
        } else {
            res+=20;
        }
    }

    cout << res << "\n";
}

int main() {
    slv();
}
