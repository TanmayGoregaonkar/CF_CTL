#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        int freq[n];
        map<int, int> mp;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> freq[i];
            mp[freq[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second % it.first != 0)
            {
                flag = false;
            }
        }
        int val = *s.begin();
        // freq    cnt   val
        map<int, pair<int, int>> str;

        if ((s.size() == 1 && (val == 1 || val == n || mp[val] % val == 0)) || flag)
        {
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                if (str.find(freq[i]) == str.end() || str[freq[i]].first == 0)
                {
                    temp++;
                    str[freq[i]] = {freq[i] - 1, temp};
                   
                    freq[i] = str[freq[i]].second;
                }
                else
                {
                    str[freq[i]].first--;
                    freq[i] = str[freq[i]].second;

                   
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << freq[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
