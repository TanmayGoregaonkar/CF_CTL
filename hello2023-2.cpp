#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 3)
    {
        cout << "NO\n";
    }
    else
    {
        if (n & 1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    cout << -n / 2 << " ";
                }
                else
                {
                    cout << (n / 2) - 1 << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i++)
            {
                if (i & 1)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        }
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