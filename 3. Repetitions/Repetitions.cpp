#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define __SLH__ signed main()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
#define file(name)  if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
 
using namespace std;
 
const int MAXN = 2e5 + 5;
 
void solve(string s) {
    if (s.empty()) {
        cout << 0;
    }
 
    ll max_length = 1;
    ll curr_length = 1;
 
    FOR(i, 1, s.length()-1) {
        if (s[i] == s[i-1]) {
            ++curr_length;
        } else {
            max_length = max(max_length, curr_length);
            curr_length = 1;
        }
    }
    max_length = max(max_length, curr_length);
 
    cout << max_length;
}
 
__SLH__{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    file("CSES")
 
    string s; cin >> s;
 
    solve(s);
    cerr << "Time elapsed: " << TIME << " s.\n";
    return (0 ^ 0);
}