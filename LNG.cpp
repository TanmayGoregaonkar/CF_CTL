#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int bob,alice=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]%a == 0)
        {
            bob++;
        }
        if (v[i]%b == 0)
        {
            alice++;
        }
        
    }
    if (alice == bob || bob>alice)
    {
        cout<<"ALICE\n";
    }
    else
    {
        cout<<"BOB\n";
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