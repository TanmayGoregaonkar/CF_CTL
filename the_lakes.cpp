#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = sqrt(1e9) + 5;
const int MOD = 1e9 + 7;

#define ff first
#define ss second
#define pb push_back
#define vll vector<ll>
const int M = 1e9 + 7;
vector<ll> pr;
vector<bool> primes(N, 1);
// string -> U & u function
// trsumform(s.begin(), s.end(), s.begin(), ::toupper);
ll binExpIter(ll a, ll b)
{
    ll sum = 1;
    while (b)
    {
        if (b & 1)
        {
            sum = (sum * a) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return sum;
}

void bfs(vector<int> adjLs[], int V)
{
    int vis[V] = {0};
    vis[0] = 1;
    queue<ll> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adjLs[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] != 0 && vis[i][j] == false)
                {
                    ll count = 0;
                    queue<pair<ll, ll>> q;
                    q.push({i, j});
                    vis[i][j] = true;
                    while (!q.empty())
                    {
                        ll x = q.front().first;
                        ll y = q.front().second;
                        q.pop();
                        count += v[x][y];
                        if (x - 1 >= 0 && v[x - 1][y] != 0 && vis[x - 1][y] == false)
                        {
                            vis[x - 1][y] = true;
                            q.push({x - 1, y});
                        }
                        if (x + 1 < n && v[x + 1][y] != 0 && vis[x + 1][y] == false)
                        {
                            vis[x + 1][y] = true;
                            q.push({x + 1, y});
                        }
                        if (y - 1 >= 0 && v[x][y - 1] != 0 && vis[x][y - 1] == false)
                        {
                            vis[x][y - 1] = true;
                            q.push({x, y - 1});
                        }
                        if (y + 1 < m && v[x][y + 1] != 0 && vis[x][y + 1] == false)
                        {
                            vis[x][y + 1] = true;
                            q.push({x, y + 1});
                        }
                    }
                    sum = max(sum, count);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}