#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,x,y;
    cin>>n;
    ll sum = 0;
    ll maxi = 0;
    while (n--)
    {
        cin>>x>>y;
        sum+=min(x,y);
        maxi = max(maxi,max(x,y));
    }
    cout<<2*(sum+maxi)<<endl;
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