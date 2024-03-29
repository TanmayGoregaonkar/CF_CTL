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
    int n;
    cin>>n;
    string s;
    cin>>s;
     transform(s.begin(), s.end(), s.begin(), ::toupper);
     set<char>st;
     for(auto it : s){
        st.insert(it);
     }
     int ss = st.size();
     if (ss==26)
     {
        cout<<"YES\n";
     }
     else
     {
        cout<<"NO\n";
     }
     
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}