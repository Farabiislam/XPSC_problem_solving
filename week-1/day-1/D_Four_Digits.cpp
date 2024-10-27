#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    string s = to_string(n);
    int sz = s.size();
    
     int leadingZero = 4 - sz;

          for (int i = 0; i < leadingZero; i++)
          {
               s = '0' + s;
          }
           
           cout << s;

    return 0;
}