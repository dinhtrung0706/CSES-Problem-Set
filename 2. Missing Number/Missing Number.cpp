#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define __SLH__ signed main()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define file(name)                         \
    if (fopen(name ".inp", "r"))           \
    {                                      \
        freopen(name ".inp", "r", stdin);  \
        freopen(name ".out", "w", stdout); \
    }

using namespace std;

const int MAXN = 2e5 + 5;

void solve(ll n, vector<ll> &nums)
{
    ll act_sum = 0;

    for (int num : nums)
    {
        act_sum += num;
    }

    cout << (n * (n + 1)) / 2 - act_sum;
}

__SLH__
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //file("CSES")

    ll n;
    cin >> n;
    vector<ll> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
    }

    solve(n, nums);
    //cerr << "Time elapsed: " << TIME << " s.\n";
    return (0 ^ 0);
}