#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double fl;
typedef vector<ll> vll;
#define re(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define rep(i, a, n) for (int i = a; i < n; i++)
#define in(a, n) \
    vll a(n);    \
    re(i, n) cin >> a[i];
#define printV(a)         \
    for (int i : a)       \
        cout << i << " "; \
    cout << "\n";

ll solve()
{
    ll t, ind = 0;
    cin >> t;
    vector<ll> pages_(7);
    for (int i = 0; i < 7; i++)
    {
        ll teml;
        cin >> teml;
        t -= teml;
        if (t <= 0)
        {
            return i + 1;
        }
        pages_[i] = teml;
    }
    ll i = 0;
    bool isEnd;
    // cout << t << '\n';
    while (t >= 0)
    {
        if (i == 7)
        {
            // cout << t << "  end" << endl;
            i = 0;
        }
        // cout << i << endl;       
        t -= pages_[i];
        if (0 >= t)
        {
            ind = i + 1;
            return i + 1;
            break;
        }
        i++;
    }
    return ind;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve();
    return 0;
}
