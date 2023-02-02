#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    for (int i = 0; i < n; i++)
    {
        cout<<char('a' + i%b);
    }
    cout<<"\n";
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