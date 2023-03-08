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
    int n;
    cin>>n;
    int s1 =0;int s2 = 0;
    if(n%4!=0){
        cout<<"NO\n";
    }
    else{

    cout<<"YES\n";
    for (int i = 1; i <= n/2; i++)
    {
        cout<<2*i<<" ";
        s1+=2*i;
    }
    for (int i = 1; i < n/2; i++)
    {
        cout<<2*i - 1<<" ";
        s2+=2*i -1;
    }
    cout<<abs(s1-s2)<<endl;
    }   
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
 
while(t--){
    solve();
}
 
return 0;
}