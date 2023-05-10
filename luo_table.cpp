#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;

#define ff first
#define ss second
#define pb push_back
#define vll vector<ll>
const int M = 1e9 + 7;
vector<ll> pr;
vector<bool> primes(N, 1);
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
ll binExpIter(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (int i = 1; i <= n * m; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        if (n > m)
            swap(n, m);
        if (n == 1)
            cout << (m - 1) * (v[n * m] - v[1]) << '\n';
        else
        {
            ll ans1 = (n * m - 1) * (v[n * m]) - v[1] * (n * (m - 1)) - v[2] * (n - 1);
            ll ans2 = v[n * m] * (n * (m - 1)) + v[n * m - 1] * (n - 1) - v[1] * (n * m - 1);
            cout << max(ans1, ans2) << '\n';
        }
    }
    return 0;
}