// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     int i = n / 2;
//     int j = n;
//     if (n % 2 != 0)
//     {
//         i = i + 1;
//     }
//     while (i > 0)
//     {
//         cout << i << " ";
//         i--;
//         if (i == 0)
//         {
//             break;
//         }
//         cout << j << " ";
//         j--;
//     }
//     if (n % 2 == 0)
//     {
//         cout << j << endl;
//     }
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

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int arraySortedOrNot(int arr[], int n)
// {
//     if (n == 1 || n == 0)
//         return 1;

//     if (arr[n - 1] < arr[n - 2])
//         return 0;
//     return arraySortedOrNot(arr, n - 1);
// }
// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//    for (int i = 0; i < n; i++)
//    {
//     cin>>v[i];
//    }
//    int max = v[0];
//    int min = v[0];
//    int ct = 0;
//    for (int i = 0; i < n; i++)
//    {
//     if (v[i] > max)
//     {
//         max = v[i];
//         ct++;
//     }
//     if (v[i] < min)
//     {
//         min=v[i];
//         ct++;
//     }

//    }
//    cout<<ct<<endl;

// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//         solve();

//     return 0;
// }

