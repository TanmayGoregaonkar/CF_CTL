#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    cout<<(y/x) + y%x<<endl;
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