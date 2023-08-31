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
        bool seq = 0;
        cin >> n >> m;
        queue<ll> q;

        q.push(n);

        while (!q.empty())
        {
            ll top = q.front();
            if (top == m)
            {
                cout << "YES" << endl;
                seq = 1;
                break;
            }
            q.pop();
            if (top % 3 == 0)
            {
                q.push(top / 3);
                q.push(2 * top / 3);
            }
        }
        if (!seq)
        {
            cout << "NO\n";
        }
    }
    return 0;
}