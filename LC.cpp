#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;

// Defining Modulo
const int M = 1e9 + 7;
// To store prime factors
vector<ll> pr;
vector<bool> primes(N, 1);
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
ll binExpIter(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        // If b is odd
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        // Reaching to current power of a
        a = (a * a) % M;
        // Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
int minMaxDifference(int num)
{
    string s = to_string(num);
    vector<int> ans;
    for (int i = 0; i <= 9; i++)
    {
        string s1 = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s1[j] == ('0' + i))
            {
                s1[j] = '9';
            }
        }
        string s2 = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s2[j] == ('0' + i))
            {
                s2[j] = '0';
            }
        }
        ans.push_back(stoi(s1));
        ans.push_back(stoi(s2));
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    sort(ans.begin(), ans.end());
    return abs(ans[0] - ans[ans.size() - 1]);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    string s = to_string(n);
    for (int i = 0; i <= 9; i++)
    {
        string s1 = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s1[j] == ('0' + i))
            {
                s1[j] = '9';
                cout << s1[j];
            }
        }
        cout << endl;
        string s2 = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (s2[j] == ('0' + i))
            {
                s2[j] = '0';
                cout << s2[j];
            }
        }
        cout << endl;
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