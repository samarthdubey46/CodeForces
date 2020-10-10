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
    // ll n, m;
    // vector<ll> repeted;
    // cin >> n >> m;
    // vector<ll> ranked(n), player(m),player_ranks;
    // re(i, n)
    // {
    //     ll temp;
    //     cin >> temp;
    //     ranked[i] = temp;
    //     if (find(ranked.begin(), ranked.end(), temp) != ranked.end())
    //     {
    //         repeted.push_back();
    //     }
    // }
    // reverse(ranked.begin(), ranked.end());
    // vector<ll>::iterator lower,upper;

    // re(i, m)
    // {
    //     ll temp_player;
    //     cin >> temp_player;
    //     player[i] = temp_player;

    // }
    vector<ll> v{100, 100, 50, 40, 40,20,10}; // 10,20,40,40,50,50,100,100 // 7
    map<ll,ll> ranks;
    ll n = v.size();
    ll currRank = 1;
    for(int i = 0; i < n; i++) {
        if(ranks.find(v[i]) != ranks.end()) continue;
        ranks[v[i]] = currRank;
        currRank++;
    }
    map<ll,ll>::iterator it =  ranks.upper_bound(120);
    cout << it->second << "\n";
    ll ans = ((it == ranks.end()) ? 1 : (it->second + 1));
    cout << ans;

    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    // vector<ll>::iterator lower, upper;
    // lower = lower_bound(v.begin(), v.end(), 25);
    // upper = upper_bound(v.begin(), v.end(), 25);
    // cout << (lower - v.begin()) << ' ' << (upper - v.begin()) << endl;
    return 0;
}
