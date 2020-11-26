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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, c;
    cin >> n >> c;
    in(a, n);
    ll words = 0;
    for (ll i = 0; i < n - 1; i += 2)
    {
        ll j = i + 1;

        if (a[j] - a[i] < c)
        {
            words++;
        }
        if (j != n && a[j + 1] - a[j] < c)
        {
            words++;
        }
        if (a[j] - a[i] > c)
        {
            words = 0;
        }
        if (j != n && a[j + 1] - a[j] > c)
        {
            words = 0;
        }
    }
    cout << words + 1;
    return 0;
}
