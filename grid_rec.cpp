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
    int n;
    cin >> n;
    vector<vector<int>> v(2, vector<int>(n, 0));

    v[0][0] = 2 * n;
    v[1][0] = 1;
    int p = 1;
    // cout << v[0][0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            v[0][i] = ++p;
        }
        else
        {
            v[1][i] = ++p;
        }
        
    }
    p = 2*n-1;
    for (int i = n - 1; i >= 1; i--)
    {
        if (i & 1)
        {
            v[1][i] = p--;
        }
        else
        {
            v[0][i] = p--;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}