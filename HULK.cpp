// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     string s1 = "I hate";
//     string s2 = "I love";
//     if (n == 1)
//     {
//         cout << "I hate";
//     }
//     else
//         for (int i = 1; i <= n; i++)
//         {

//             if (i & 1)
//             {
//                 cout << s1;
//             }
//             else
//             {
//                 cout << s2;
//             }
//             if (i != n)
//             {
//                 cout << " that ";
//             }
//         }
//     cout << " it\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     solve();

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
        // Reaching to current power of a
        a = (a * a) % M;
        //Dividing or right shifting b
        b >>= 1;
    }
    return ans;
}
void solve(){
    
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