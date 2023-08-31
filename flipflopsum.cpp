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
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int flg=0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] == -1 && a[i+1] == -1)
        {
            a[i]=1;
            a[i+1]=1;
            flg=1;
            break;
        }
        if ((a[i]== -1 && a[i+1] == 1) || (a[i]== 1 && a[i+1] == -1))
        {
            flg=1;
        }
        
    }
    if(flg==0){
        a[0]=-1,a[1]=-1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
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