#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, vector<int>> mp;
    for (int i = 0; i <= n - 2; i += 1)
    {
        if (mp[s.substr(i, 2)].size() < 2)
        {
            mp[s.substr(i, 2)].push_back(i);
        }

        else if (mp[s.substr(i, 2)].size() == 2)
        {
            mp[s.substr(i, 2)][1] = i;
        }
    }
    bool ch = 0;
    for (auto &it : mp)
    {
        if (it.second.size() >= 2)
        {

            if (it.second[1] - it.second[0] >= 2)
            {
                ch = 1;
                break;
            }
        }
    }

    if (ch)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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