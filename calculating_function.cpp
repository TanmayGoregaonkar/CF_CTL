#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string st;
    cin >> st;
    set<int> s;
    for (int i = 0; i < st.length(); i++)
    {
        s.insert(st[i]);
    }
    if (s.size() % 2 != 0)
    {
        cout << "IGNORE HIM!\n";
    }
    else
    {
        cout << "CHAT WITH HER!\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}