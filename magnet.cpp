#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i+1])
        {
            ct++;
        }
    }
    cout<<ct<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}