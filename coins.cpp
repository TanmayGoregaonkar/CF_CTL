#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;

// Defining Modulo
const int M = 1e9 + 7;
// To store prime factors
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
        // Reaching to current power of a
        a = (a * a) % M;
        // Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> x(100500);
    for (int i = 0; i < m; i++)
        cin >> x[i];

    // ll t = 1;
    ll ans = 0;
    ans = x[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (x[i - 1] > x[i])
        {
            ans += (n - x[i - 1]) + (x[i]);
        }
        else
            ans += (x[i] - x[i - 1]);
    }
    cout<< ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
