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
 ll dfs(ll x,ll y,vector<vector<ll>>&v,vector<vector<ll>>&vis){
    if(x<0 || y<0 || x>=v.size() || y>=v[0].size()){
        return 0;
    }
    if(v[x][y] == 0 || vis[x][y]){
        return 0;
    }
    vis[x][y] = 1;
    ll ans = v[x][y];
    ans+=dfs(x+1,y,v,vis);
    ans+=dfs(x,y+1,v,vis);
    ans+=dfs(x-1,y,v,vis);
    ans+=dfs(x,y-1,v,vis);
    return ans;
 }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--)
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v(n,vector<ll>(m)),vis(n,vector<ll>(m));
    ll ans = 0 ;
    for(ll i = 0;i<n;i++){
        for(ll j =0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(ll i = 0;i<n;i++){
        for(ll j =0;j<m;j++){
            if(v[i][j]!=0 && !vis[i][j]){
                ll maxi = dfs(i,j,v,vis);
                ans = max(ans,maxi);
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}