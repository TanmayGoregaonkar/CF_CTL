// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// const int N = sqrt(1e9) + 5;
// const int MOD = 1e9 + 7;

// // Defining Modulo
// const int M = 1e9 + 7;
// // To store prime factors
// vector<ll> pr;
// vector<bool> primes(N, 1);
// ll binExpIter(ll a, ll b)
// {
//     ll ans = 1;
//     while (b)
//     {
//         // If b is odd
//         if (b & 1)
//         {
//             ans = (ans * a) % M;
//         }
//         // Reaching to current power of a
//         a = (a * a) % M;
//         // Dividing or right shifting b
//         b >>= 1;
//     }
//     return ans;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int ct1 = 0;
//     int ct2 = 0;
//     for (auto it : s)
//     {
//         if (it == 'U')
//         {
//             ct1++;
//         }
//         if (it == 'D')
//         {
//             ct1--;
//         }
//         if (it == 'L')
//         {
//             ct2--;
//         }
//         if (it == 'R')
//         {
//             ct2++;
//         }
//         if (ct1 == 1 && ct2 == 1)
//         {
//             cout << "YES\n";
//             return;
//         }
//     }
    

//         cout << "NO\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

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
        //Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
void solve(){
    char s;
    cin>>s;
    string cf = "codeforces";
    for (int i = 0; i < cf.length(); i++)
    {
        if (cf[i] == s)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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