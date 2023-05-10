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
bool palli(string s)
{
    string doo = s;
    reverse(s.begin(), s.end());
    if (doo == s)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string dummy;
        for (int i = 1; i < s.length(); i++)
        {
            dummy += s[i];
        }
        if (palli(dummy))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s.size() - 1 << endl;
        }
    }
    return 0;
}