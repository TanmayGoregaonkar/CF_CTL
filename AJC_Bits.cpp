// #include <iostream>

// int main()
// {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     int n;
//     int p;

//     std::cin >> n;

//     int ans[n];

//     for (int i = 1; i < n + 1; ++i)
//     {
//         std::cin >> p;

//         ans[p - 1] = i; // Zero index correction for p
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         std::cout << ans[i] << " ";
//     }
//     std::cout << "\n";
// }
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,p;
    cin>>n;
    vector<int>v(n);
    for (int i = 1; i < n+1; i++)
    {
        cin>>p;
        v[p-1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}