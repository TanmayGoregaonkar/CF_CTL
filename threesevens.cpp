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
    int m;
    cin >> m;
    map<int, int> mp;
    vector<vector<int>> v(m);
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            mp[a]++;
            v[i].push_back(a);
        }
    }
    int flg2 = true;
    for (int i = 0; i < m; i++)
    {
        int flg = false;
        for (int j = 0; j < v[i].size(); j++)
        {
            mp[v[i][j]]--;
            if (mp[v[i][j]] == 0 && flg == false)
            {
                ans.push_back(v[i][j]);
                flg = true;
            }
        }
        if (flg == false)
        {
            flg2 = false;
            break;
        }
    }
    if (flg2 == false)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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