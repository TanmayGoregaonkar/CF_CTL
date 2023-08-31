#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int e = 0;
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i % 2 == 0)
                {
                    e++;
                }
                else
                {
                    o++;
                }
            }
        }
        if (e > 0 && o > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
