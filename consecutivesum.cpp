#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll sum = 0;
    for(int i=0;i<k;i++)
    {
        ll mx=0;
        for(int j=i;j<n;j+=k)
        {
            mx=max(mx,v[j]);
        }
        sum+=mx;
    }
    cout<<sum<<endl;
    
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