#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
   vector<int>a(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   int sum= 0 ;
  sum = accumulate(a.begin() , a.end() , 0);
   bool yes = 0 ;
   sort(a.begin() , a.end());
    int start = a[n-1] ;
    int tsum = sum+ s ;
    
    for(int i = start ; i < 50 ; i++){
          int tempsum = ((i+1)*i)/2;
        //   cout<<"tempsum is "<<tempsum <<endl;
        //   cout<<"tsum "<<tsum<<endl;
        if( tempsum == tsum  ){
               yes =1 ;
               break;
        }
        if(tempsum >tsum) break;

    }
  
 
    if (yes)
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
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}