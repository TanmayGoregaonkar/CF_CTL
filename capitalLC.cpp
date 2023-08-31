#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
void solve(){
    int h,m;
    cin>>h>>m;
    cout<<1440 - (60*h) - m<<endl;
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