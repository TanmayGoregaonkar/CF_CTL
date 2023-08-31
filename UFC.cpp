#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s, g;
    cin >> s >> g;
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && g[i] == '1')
        {
            v.push_back('0');
        }
        else if (s[i] == '0' && g[i] == '0')
        {
            v.push_back('0');
        }
        else
        {
            v.push_back('1');
        }
    }
    for (auto it : v)
    {
        cout << it;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    

    solve();

    return 0;
}