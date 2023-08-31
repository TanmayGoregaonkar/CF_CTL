#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
int run(int s,int n,int m){
    int s1 = s%10;
    int first = pow(s1,n);
    first = first%10;
    first = pow(first,m);
    first = first%(1000000007);
    return first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout<<run(2,3,4);
    return 0;
}