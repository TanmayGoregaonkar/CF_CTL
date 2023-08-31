#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    for (ll i = 0; i < v.size(); i++)
    {
        cout<<"{"<<v[i].first<<" "<<v[i].second<<"}"<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for (ll i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    printVector(v);
    return 0;
}