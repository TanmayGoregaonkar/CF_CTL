#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for (auto it : mp)
    {
        if (it.second >= 1)
        {
            it.second = it.second + 1;
            ans += it.second;
        }
    }
    cout << ans << endl;
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