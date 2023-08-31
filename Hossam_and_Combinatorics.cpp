#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
   
    ll mn = mp.begin()->first;
    auto last = mp.end();
    last--;
    ll mx = last->first;
    ll ctmn,ctmx;
   
   ctmn = mp[mn];
   ctmx = mp[mx];
   
     bool ch =1 ;
     ll var = a[0];
     for(ll i =1 ; i<n ;i++){
         if(a[i]!=var){
            ch = 0 ;
         }
     }
    if(ch){
        cout<<ctmx*ctmx- ctmx<<endl;
    }
    else{
            cout<<2*ctmn*ctmx<<endl;
    }
 
    
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    
}