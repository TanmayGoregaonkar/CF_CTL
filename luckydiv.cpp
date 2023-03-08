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
        // If b is odd
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
int solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = x * y * z;
    int b = x * (y + z);
    int c = x + (y * z);
    int d = (x + y) * z;
    int e = x+y+z;
    return max({a, b, c, d,e});
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << solve() << endl;

    return 0;
}