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
bool solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    if(i>=n || (s[i]!='m' && s[i]!='M'))
    {
        return false;
    }
    else{
        while(i<n && (s[i]=='m' || s[i]=='M'))
        {
            i++;
        }
    }
    if(i>=n || (s[i]!='e' && s[i]!='E'))
    {
        return false;
    }
    else{
        while(i<n && (s[i]=='e' || s[i]=='E'))
        {
            i++;
        }
    }
    if(i>=n || (s[i]!='o' && s[i]!='O'))
    {
        return false;
    }
    else{
        while(i<n && (s[i]=='o' || s[i]=='O'))
        {
            i++;
        }
    }
    if(s[i]!='w' && s[i]!='W')
    {
        return false;
    }
    else{
        while(i<n && (s[i]=='w' || s[i]=='W'))
        {
            i++;
        }
    }
    if(i<n)
    {
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        if(solve())
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}