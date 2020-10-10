// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef double fl;
// typedef vector<ll> vll;
// #define re(i, n) for (int i = 0; i < n; i++)
// #define endl "\n"
// #define rep(i, a, n) for (int i = a; i < n; i++)
// #define in(a, n) \
//     vll a(n);    \
//     re(i, n) cin >> a[i];
// #define printV(a)         \
//     for (int i : a)       \
//         cout << i << " "; \
//     cout << "\n";

// void solve()
// {
//     ll n, m;
//     cin >> n >> m;
//     in(a, n);
//     printV(a);
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     map<string, map<ll, ll>> m;
//     m.insert(make_pair("x", map<ll, ll>()));
//     m.insert(make_pair("y", map<ll, ll>()));

//     while (t--)
//     {
//         ll x, y;
//         cin >> x >> y;
//         if(m['x'].find(x) == m['x'].end()){
//             m['x'].insert({x,1})
//         }else{
//             m['x'][x] ++
//         }
//         if(m['y'].find(y) == m['y'].end()){
//             m['y'].insert(y,1)
//         }else{
//             m['y'][y] ++
//         }
//     };
//     return 0;
// }

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
typedef pair<ll,ll> pll;
#define X first
#define Y second

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<pll> points(n);
    re(i, n)
        cin >> points[i].X >> points[i].Y;
    ll cnt=0;
    unordered_map<ll,set<ll>> x_store, y_store;
    re(i,n) {
        x_store[points[i].X].insert(points[i].Y);
        y_store[points[i].Y].insert(points[i].X);
    }

    re(i,n) {
        ll x = points[i].X, y = points[i].Y;
        bool t,l,r,b;
        t=l=r=b=0;
        if(x_store.find(x) == x_store.end() || y_store.find(y) == y_store.end()) continue;

        set<ll>::iterator itLox = x_store[x].lower_bound(y);
        set<ll>::iterator itUpx = x_store[x].upper_bound(y);
        set<ll>::iterator itLoy = y_store[y].lower_bound(x);
        set<ll>::iterator itUpy = y_store[y].upper_bound(x);
        if(itLox != x_store[x].begin() and itUpx != x_store[x].end() and 
        itLoy != y_store[y].begin() and itUpy != y_store[y].end()) cnt++;
    }
    cout << cnt;
  
    return 0;
}
