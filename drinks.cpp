#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    double n;
    cin>>n;
    vector<double>v(n);
    double s = 0;
    for (double i = 0; i < n; i++)
    {
       cin>>v[i];
       s+=v[i];
    }
    cout<<(double)s/(double)n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}