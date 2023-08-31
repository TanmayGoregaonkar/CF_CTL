#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll p, s, n;
    cin >> p >> s;
    vector<ll> v(n);
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < p; i++)
    {
        vector<pair<ll, ll>> ans(s);
        for (int j = 0; j < s; j++)
        {
            cin >> ans[i].first;
        }
        for (int j = 0; j < s; j++)
        {
            cin >> ans[i].second;
        }
        sort(ans.begin(), ans.end());
        ll ct = 0;
        for (int k = 0; k < s - 1; k++)
        {
            if (ans[i].second > ans[i + 1].second)
            {
                ct++;
            }
            vp.push_back({ct, i});
        }
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < p; i++)
    {
        cout << vp[i].second + 1 << endl;
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