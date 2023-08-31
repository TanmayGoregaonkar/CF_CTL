#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int s;
    cin >> s;

    ll x=1;
    ll temp=0;
    ll cnt=0;
    while(temp<s)
    {
        temp+=x;
        x+=2;
        cnt++;
    }
    cout<<cnt<<endl;
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