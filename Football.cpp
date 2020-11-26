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
    string s;
    cin >> s;
    ll t_count = 0;
    char last_c = s[0];
    bool t;

    for (char i : s)
    {
        if (t_count == 7)
        {
            t = true;
            break;
        }
        i == last_c ? t_count++ : t_count = 0;
        last_c = i;
    }
    if (t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
