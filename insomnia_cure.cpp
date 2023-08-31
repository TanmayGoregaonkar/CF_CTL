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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ct = 0;
    ct = d;
    if (k==1 || l==1 || m==1 || n==1)
    {
        cout<<d<<endl;
    }
    else
    {
        for (int i = 0; i <= d; i++)
        {
            if (i%k!=0 && i%l!=0 && i%m!=0  && i%n!=0)
            {
                ct--;
            }
            
        }
        cout<<ct<<endl;
    }
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
        solve();
 

    return 0;
}