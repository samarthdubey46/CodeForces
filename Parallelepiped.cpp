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


ll hcf(ll a,ll b){
    if(b == 0){
        return a;
    }
    else{
        return hcf(b,a % b);
    }
}
void solve()
{
    ll a,b,c,area_b,area_c,area_a;
    cin >> area_a >> area_b >> area_c;
    // s1 = ab,s2 = ac,s3 = bc
    a = sqrt((area_a * area_b) / area_c);
    b = sqrt((area_c * area_a) / area_b);
    c = sqrt((area_c * area_b) / area_a);
    cout << 4*(a + b + c) << endl;    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // };
    return 0;
}
