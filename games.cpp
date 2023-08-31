#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int a[3];int n;
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    cin>>n;
    sort(a,a+3);
    n-=2*a[2] - a[1]  - a[0];
    if (n<0 || n%3!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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