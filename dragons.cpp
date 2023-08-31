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
//string -> U & u function
//transform(s.begin(), s.end(), s.begin(), ::toupper);
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
        //Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
void solve(){
    int s,n;
    cin>>s>>n;
    vector<pair<ll,ll>>p;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    int flag = 0;
    for(auto it : p){
        if(s <= it.first ){
            // cout<<"NO\n";
            flag = 0;
            break;
        }
        else{
            // cout<<"YES\n";
            s+=it.second;
            flag = 1;
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
    solve();

 
return 0;
}