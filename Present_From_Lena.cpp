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
//     vector<vector<ll>> arr((t * 2) + 1, vector<ll>());
//     re(i, t + 1)
//     {
//         ll offset = 0;
//         for (ll j = 0; j <= (i * 2); j++)
//         {
//             arr[i].push_back(j - offset);
//             if (j >= i)
//             {
//                 offset += 2;
//             }
//         }
//         // cout << endl;
//     }
//     // printV(arr[2]);
//     for(ll i = t + 1;i < (t * 2) + 1;i++){
//         arr[i] =  arr[(t*2) - i];
//     }
//     for(ll i = 0; i < arr.size();i++){
//         for(ll z = 0;z < arr[t].size() - arr[i].size();z++){
//             cout << " ";
//         }
//         for(ll zz = 0;zz < arr[i].size();zz++){
//             cout << arr[i][zz];
//             if(zz != arr[i].size() - 1){
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

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

    ll i = 0;
    bool backward = false;
    while (i >= 0)
    {
        string spaces(2 * (n - i), ' ');
        cout << spaces;
        cout << 0;
        for (ll j = 1; j <= i; j++)
        {
            cout << " " << j;
        }
        for (ll j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        if (backward)
            i--;
        else
            i++;
        if (i > n)
        {
            i = n - 1;
            backward = true;
        }
        if(i < 0) break;
        cout << "\n";
    }

    return 0;
}
