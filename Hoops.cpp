#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n<=2){
        cout<<1<<endl;
    }
    else{
        if(n%2 == 0){
            cout<<n/2<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;
        }
        
    }
    
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