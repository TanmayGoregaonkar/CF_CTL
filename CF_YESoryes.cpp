#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    else
    {
        bool ans = false;
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s.substr(i, 2) != "Ye" && s.substr(i, 2) != "es" && s.substr(i, 2) != "sY")
                {
                    ans = true;
                    break;
                }
            }
            if (!ans)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
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

// 12
// YES   no
// esYes   yes
// codeforces no
// es  y
// se  n
// YesY  y
// esYesYesYesYesYesYe   y
// seY      n
// Yess     n
// sY       y
// o
// Yes      y

// NO
// YES
// NO
// YES
// NO
// YES
// YES
// NO
// NO
// YES
// NO
// YES
