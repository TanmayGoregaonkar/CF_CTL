#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;
 
#define ff first
#define ss second
#define pb push_back
#define vll vector<ll>
const int M = 1e9 + 7;
vector<ll> pr;
vector<bool> primes(N, 1);
//string -> U & u function
//transform(s.begin(), s.end(), s.begin(), ::toupper);
ll binExpIter(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return ans;
}
void solve(){
    
    ll n,q;
    cin>>n>>q;
    vll v(n+1);
    for(int i =1;i<=n;i++){
        cin>>v[i];
        v[i] += v[i-1];
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll ans = v[n] - v[r] + v[l-1] + ((r-l+1)*k);
        if(ans%2 == 1)cout<<"YES\n";
        else cout<<"NO\n";
    }   
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}