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

bool sortcol(vector<ll> &v1,
             vector<ll> &v2)
{
    return v1[0] < v2[0];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s1, n;
    cin >> s1 >> n;
    vector<vector<ll>> arr(n, vector<ll>(2, 0));
    
    re(i, n)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        arr[i][0] = t1;
        arr[i][1] = t2;
    }
    sort(arr.begin(), arr.end(), sortcol);
    bool CanWin = true;
    re(i, arr.size())
    {
        if(s1 > arr[i][0]){
            s1 += arr[i][1];
            continue;
        }
        CanWin = false;
        break;
        
    }
    if(CanWin){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
