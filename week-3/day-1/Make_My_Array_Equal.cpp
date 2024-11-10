#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     cin >> t;
     while (t--)
     {
         long long int n;
         cin >> n;
         long long int a[n];
         for (int i = 0; i < n; i++)
             cin >> a[i];

         sort(a, a + n);
         if (n == 1)
         {
             cout << "YES" <<"\n";
         }
         else if (n == 2)
         {
             if (a[0] == a[1] || a[0] == 0 || a[1] == 0)
                 cout << "YES" <<"\n";
             else
                 cout << "NO" << "\n";
         }
         else
         {
             int f = 0;
             for (int i = 0; i < n - 1; i++)
             {
                 if (a[i] == 0)
                 {
                     continue;
                 }
                 else if (a[i] != a[i + 1])
                 {
                     f = 1;
                     break;
                 }
             }
             if (f == 1)
                 cout << "NO" << "\n";
             else
                 cout << "YES" << "\n";
         }
     }

    return 0;
}