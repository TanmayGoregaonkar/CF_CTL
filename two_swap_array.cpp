#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v1(n);
    vector<int>v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (i<k)
        {
            ct+=max(v1[i],v2[i]);
        }
        else
        {
            ct+=v1[i];
        }
        
    }
    cout<<ct<<endl;
    
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