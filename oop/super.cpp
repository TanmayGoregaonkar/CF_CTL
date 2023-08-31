#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
// string -> U & u function
// transform(s.begin(), s.end(), s.begin(), ::toupper);
int main()
{   int arr[6]={1,5,6,8,4,2};
int n=6;
    for(int i=1;i<=n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            cout<<i<<endl;
        }
    }
}