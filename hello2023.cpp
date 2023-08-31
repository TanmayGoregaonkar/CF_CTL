#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L' && s[i+1] == 'R')
        {
            ans = i+1;
            break;
        }
        if(s[i] == 'R' && s[i+1] == 'L')
        {
            ans = 0;
            break;
        }
        
    }
    cout<<ans<<endl;
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