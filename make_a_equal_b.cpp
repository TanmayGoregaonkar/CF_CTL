#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int a0,a1,b0,b1=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a0++;
        }
        else
        {
            a1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            b0++;
        }
        else
        {
            b1++;
        }
    }
    if (a0==b0 && b1==a1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<min(abs(a0-b0)+1,abs(a1-b1)+1)<<endl;
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