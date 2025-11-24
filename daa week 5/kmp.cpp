#include <bits/stdc++.h>
using namespace std;

int main() {
    string t = "ababcabcababc";
    string p = "abc";

    int n = t.size();
    int m = p.size();

    vector<int> l(m);
    int a = 0, b = 1;
    l[0] = 0;

    while (b < m) {
        if (p[b] == p[a]) {
            a++;
            l[b] = a;
            b++;
        } else {
            if (a != 0) a = l[a - 1];
            else { l[b] = 0; b++; }
        }
    }

    int i = 0, j = 0;

    while (i < n) {
        if (t[i] == p[j]) { i++; j++; }

        if (j == m) {
            cout << (i - j) << "\n";
            j = l[j - 1];
        } else if (i < n && t[i] != p[j]) {
            if (j != 0) j = l[j - 1];
            else i++;
        }
    }
}
