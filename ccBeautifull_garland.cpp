#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int cr,cg = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'R')
            cr++;
        
        else
        {
            cg++;
        }
        
    }
    if (cr == cg)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
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