#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans  = true;
    int cd = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i]%cd != 0)
        {
            ans = false;
        }
        
    }
    if (ans)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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