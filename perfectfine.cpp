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
void solve()
{
    int n;
    cin >> n;
    int mini = 1e9;
    vector<pair<int, string>> p(n);

    string str, str2;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        cin >> p[i].second;
        if (p[i].second == "11")
        {
            mini = min(mini, p[i].first);
        }
        // cout<<mini;
    }
    sort(p.begin(), p.end());
    int test1 = -1, test2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "10")
        {
            test1 = p[i].first;
            // cout<<test1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "01")
        {
            test2 = p[i].first;
            // cout<<test2;
            break;
        }
    }
    if (mini == 1e9)
    {
        if (test1 != -1 && test2 != -1)
        {
            cout << test1 + test2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (test1 == -1 || test2 == -1)
    {
        if (mini != 1e9)
        {
            cout << mini << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        // cout<<test1+test2;
        cout << min(mini, test1 + test2) << endl;
    }
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