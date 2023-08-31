#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ct = 0;
    // if (a != b && a != c && a != d)
    // {
    //     ct++;
    // }
    // else if (b != c && b != d && b != a)
    // {
    //     ct++;
    // }
    // else if (c != a && c != b && c != d)
    // {
    //     ct++;
    // }
    // else if (d != a && d != b && d != c)
    // {
    //     ct++;
    // }
    
    map<int,int>mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    // if (a != b && a != c && a != d)
    // {
    //     ct++;
    // }
    // else if (b != c && b != d && b != a)
    // {
    //     ct++;
    // }
    // else if (c != a && c != b && c != d)
    // {
    //     ct++;
    // }
    // else if (d != a && d != b && d != c)
    // {
    //     ct++;
    // }
    
    
    
    cout << 4-mp.size() << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}