#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int mini = INT_MIN;
    for (auto i : mp)
    {
        if (i.second >= 1)
        {
            mini = max(mini,i.second);
        }
        
    }
    cout<<abs(mini-n)<<endl;
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