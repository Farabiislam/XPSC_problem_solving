#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int N;
     cin >> N;
     for (int i = 0; i < N; i++)
     {
         cout << ((i & 2) ? 'b' : 'a');
     }

     return 0;
}