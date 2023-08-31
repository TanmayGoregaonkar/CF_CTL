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
    int a, b;
    cin >> a >> b;
    // if (a % 2 == 0 && b % 2 == 0)
    // {
        cout << 2 << endl;
        cout<< 1 << " " << b-1<<endl;
        cout << a << " " << b << endl;
    // }
    // else
    // {
    //     cout << 1 << endl;
    //     // cout << 0 << " " << 0 << endl;
    //     cout << a << " " << b << endl;
    // }
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