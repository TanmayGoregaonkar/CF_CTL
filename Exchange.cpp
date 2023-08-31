#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if (a>b)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<((n-1)/a)+1<<endl;
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