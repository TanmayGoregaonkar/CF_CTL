#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(z-z%x+y <= z){
        cout<<z-z%x+y<<endl;
    }
    else
    {
        cout<<z-z%x-(x-y)<<endl;
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