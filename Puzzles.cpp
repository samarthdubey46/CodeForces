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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    in(a, m);
    ll min_Differ = 0;
    sort(a.begin(), a.end());
    vll::iterator lower;
    re(i, m)
    {
        for(ll j = i+1; j < m;j++){

        }
        lower = lower_bound(a.begin(), a.end(), a[i]);
        // cout <<  << " ";
        ll d_t = a[(lower - a.begin()) + 1];
        if (lower - a.begin() != 0 && (a[(lower - a.begin())]) < d_t)
        {
            d_t = a[(lower - a.begin())] ;
        }   
    }
    // cout << min_Differ;

    return 0;
}
