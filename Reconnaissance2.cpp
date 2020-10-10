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
    ll t,f_,l_,lowest_sum = 1000000;
    cin >> t;
    vector<ll> heights(t);
    re(i,t){
        cin >> heights[i];
    }
    re(i,t-1){
        ll j = i + 1;
        ll sun_ = abs(heights[i] - heights[j]);
        if(sun_ < lowest_sum ){
            f_ = i;
            l_ = j;
            lowest_sum = sun_;
        }
    }
    if(abs(heights[0] - heights[t - 1]) < lowest_sum){
        f_ = t - 1;
        l_ = 0;
    }
    cout << f_ + 1 << ' ' << l_ + 1 << endl;
    return 0;
}
