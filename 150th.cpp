#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int a[5];
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
        sum += a[s[i] - '0'];
    cout << sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}