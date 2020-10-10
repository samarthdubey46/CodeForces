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

void solve()
{
    ll n, m;
    cin >> n >> m;
    in(a, n);
    printV(a);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, mon;
    cin >> t;
    vll growth(12);
    re(i, 12)
    {
        cin >> growth[i];
    }
    sort(growth.begin(), growth.end(), greater<int>());
    if (t == 0)
    {
        cout << 0;
    }
    else
    {
        re(i, 12)
        {
            t -= growth[i];
            if (t <= 0)
            {
                cout << i + 1;
                break;
            }
        }
        if (t > 0)
        {
            cout << -1;
        }
    }

    return 0;
}
