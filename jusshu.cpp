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
#define print(i) cout << i;

void solve()
{
    ll n, m;
    cin >> n >> m;
    in(a, n);
    ll rem = n;
    ll ind;
    while (1)
    {
        re(i, n)
        {
            if (a[i] > 0)
            {
                if (rem == 1)
                {
                    cout << i + 1;
                    return;
                }
                a[i] -= m;
                if (a[i] <= 0) rem--;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
