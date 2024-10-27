#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
          int f = true;
        for (int i = 1; i <=10; i++)
        {
              if( c*i >= a && c*i <=b){
                 cout << c*i;
                 f = false;
                 break;
              }
        }

        if(f){
         cout << "-1";
        }

    return 0;
}