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
void solve()
{
    string s;
    cin >> s;
    vector<char> v;
    int flag  =1;
    for (int i = 0; i < s.length(); i++)
    {
        // if (s.substr(i, 3) == "WUB")
        // {
        //     // v.push_back();
        //     s.erase(i, 3);
        // }
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i+=2;
            if (!flag)
            {
                cout<<" ";
            }
            
            continue;
            
        }
        else
        {
            flag = 0;
            cout<<s[i];
        }
        
    }

    // cout <<  endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}